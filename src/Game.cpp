#include "stdafx.h"

AddressMgr g_addresses;

bool Game::Initialize()
{
	auto addresses = g_addresses.getOrCreate("game");

	#pragma region Game State

	// get pointer to game state..
	auto result = BytePattern((BYTE*)"\x0F\x29\x74\x24\x00\x85\xDB", "xxxx?xx").get();

	if (result)
	{
		LOG("Game state found at 0x%llX", result);
	}

	else
	{
		LOG("[ERROR] Failed to find game state");
		return false;
	}

	m_pGameState = reinterpret_cast<eGameState*>(*reinterpret_cast<int *>(result - 4) + result);

	#pragma endregion

	#pragma region getCamDirectorFromPool

	auto pattern = BytePattern((BYTE*)"\x39\x18\x74\x0A\x48\xFF\xC6", "xxxxxxx");

	result = pattern.get(-0x48);

	if (result)
	{
		LOG("getCamDirectorFromPool() found at 0x%llX", result);
	}

	else
	{
		LOG("[ERROR] Failed to find getCamDirectorFromPool()");
		return false;
	}

	addresses->insert("getCamDirectorFromPool", result);

	#pragma endregion

	#pragma region Cam Metadata Pool

	result = BytePattern((BYTE*)"\x88\x50\x41\x48\x8B\x47\x40", "xxxxxxx").get(-0x28);

	if (result)
	{
		LOG("CamMetadataPool found at 0x%llX", result);
	}

	else
	{
		LOG("[ERROR] Failed to find CamMetadataPool");
		return false;
	}

	result = *reinterpret_cast<int *>(result - 4) + result + 6;

	m_pCamMetadataPool = reinterpret_cast<rage::pgCollection<camMetadataRef*>*>((*reinterpret_cast<int *>(result + 3) + result - 1));

	#pragma endregion

	#pragma region Active Menu Pool

	result = BytePattern((BYTE*)"\x0F\xB7\x54\x51\x00", "xxxx?").get();

	if (result)
	{
		LOG("ActiveMenuPool found at 0x%llX", result);
	}

	else
	{
		LOG("[ERROR] Failed to find ActiveMenuPool");
		return false;
	}

	m_pActiveMenuPool = reinterpret_cast<rage::pgCollection<UIMenu>*>(*reinterpret_cast<int *>(result - 4) + result);

	#pragma endregion

	return true;
}
