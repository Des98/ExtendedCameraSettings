#pragma once

template <typename T>
class Hook
{
public:
	Hook(MemAddr addr, T target) : address(addr), fn(target) { }
	virtual ~Hook();
	virtual void remove() = 0;
	MemAddr address;
	T fn;
};

template <typename T>
Hook<T>::~Hook()
{ }

template <typename T>
class CallHook : public Hook<T>
{
public:
	CallHook(MemAddr addr, T target) : Hook<T>(addr, target) { }
	~CallHook();
	void remove() override;
};

template <typename T>
void CallHook<T>::remove()
{
	*reinterpret_cast<int32_t*>(address + 1) = 
		static_cast<int32_t>((intptr_t)fn - (intptr_t)address - 5);
}

template <typename T>
CallHook<T>::~CallHook()
{
	CallHook<T>::remove();
}

class HookManager
{
public:
	template <typename T>
	static CallHook<T> * SetCall(MemAddr address, T func)
	{
		T target = reinterpret_cast<T>(*reinterpret_cast<int *>(address + 1) + (address + 5));

		auto pFunc = AllocateFunctionStub(GetModuleHandle(nullptr), func, 0);

		*reinterpret_cast<BYTE*>(address.addr) = 0xE8;

		*reinterpret_cast<int32_t*>(address + 1) = 
			static_cast<int32_t>((intptr_t)pFunc - (intptr_t)address - 5);

		return new CallHook<decltype(func)>(address, target);
	}
	
	static PVOID AllocateFunctionStub(PVOID origin, PVOID function, int type);
	static LPVOID FindPrevFreeRegion(LPVOID pAddress, LPVOID pMinAddr, DWORD dwAllocationGranularity);
};
