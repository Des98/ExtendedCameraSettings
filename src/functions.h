#pragma once

#pragma region vehicle hash map
static std::map<DWORD, std::string> vehiclehash_map = {
	{ 0x3D8FA25C, "ninef" },
	{ 0xA8E38B01, "ninef2" },
	{ 0xEB70965F, "blista" },
	{ 0x94204D89, "asea" },
	{ 0x9441D8D5, "asea2" },
	{ 0x1F3D44B5, "boattrailer" },
	{ 0xD577C962, "bus" },
	{ 0xB8081009, "armytanker" },
	{ 0xA7FF33F5, "armytrailer" },
	{ 0x9E6B14D6, "armytrailer2" },
	{ 0xEF2295C9, "suntrap" },
	{ 0x84718D34, "coach" },
	{ 0x4C80EB0E, "airbus" },
	{ 0x8E9254FB, "asterope" },
	{ 0x5D0AAC8F, "airtug" },
	{ 0x45D56ADA, "ambulance" },
	{ 0xCEEA3F4B, "barracks" },
	{ 0x4008EABB, "barracks2" },
	{ 0xCFCA3668, "baller" },
	{ 0x8852855, "baller2" },
	{ 0x32B29A4B, "bjxl" },
	{ 0xC1E908D2, "banshee" },
	{ 0x7A61B330, "benson" },
	{ 0x432AA566, "bfinjection" },
	{ 0x32B91AE8, "biff" },
	{ 0x8125BCF9, "blazer" },
	{ 0xFD231729, "blazer2" },
	{ 0xB44F0582, "blazer3" },
	{ 0xFEFD644F, "bison" },
	{ 0x7B8297C5, "bison2" },
	{ 0x67B3F020, "bison3" },
	{ 0x898ECCEA, "boxville" },
	{ 0xF21B33BE, "boxville2" },
	{ 0x7405E08, "boxville3" },
	{ 0x3FC5D440, "bobcatxl" },
	{ 0xAA699BB6, "bodhi2" },
	{ 0xD756460C, "buccaneer" },
	{ 0xEDD516C6, "buffalo" },
	{ 0x2BEC3CBE, "buffalo2" },
	{ 0x7074F39D, "bulldozer" },
	{ 0x9AE6DDA1, "bullet" },
	{ 0xF7004C86, "blimp" },
	{ 0xAFBB2CA4, "burrito" },
	{ 0xC9E8FF76, "burrito2" },
	{ 0x98171BD3, "burrito3" },
	{ 0x353B561D, "burrito4" },
	{ 0x437CF2A0, "burrito5" },
	{ 0x779F23AA, "cavalcade" },
	{ 0xD0EB2BE5, "cavalcade2" },
	{ 0x1B38E955, "policet" },
	{ 0x97FA4F36, "gburrito" },
	{ 0xC6C3242D, "cablecar" },
	{ 0x44623884, "caddy" },
	{ 0xDFF0594C, "caddy2" },
	{ 0x6FD95F68, "camper" },
	{ 0x7B8AB45F, "carbonizzare" },
	{ 0xB1D95DA0, "cheetah" },
	{ 0xC1AE4D16, "comet2" },
	{ 0x13B57D8A, "cogcabrio" },
	{ 0x67BC037, "coquette" },
	{ 0xC3FBA120, "cutter" },
	{ 0xA3FC0F4D, "gresley" },
	{ 0xBC993509, "dilettante" },
	{ 0x64430650, "dilettante2" },
	{ 0x9CF21E0F, "dune" },
	{ 0x1FD824AF, "dune2" },
	{ 0x239E390, "hotknife" },
	{ 0x698521E3, "dloader" },
	{ 0x462FE277, "dubsta" },
	{ 0xE882E5F6, "dubsta2" },
	{ 0x810369E2, "dump" },
	{ 0x9A5B1DCC, "rubble" },
	{ 0xCB44B1CA, "docktug" },
	{ 0x4CE68AC, "dominator" },
	{ 0xD7278283, "emperor" },
	{ 0x8FC3AADC, "emperor2" },
	{ 0xB5FCF74E, "emperor3" },
	{ 0xB2FE5CF9, "entityxf" },
	{ 0xFFB15B5E, "exemplar" },
	{ 0xDE3D9D22, "elegy2" },
	{ 0xDCBCBE48, "f620" },
	{ 0x432EA949, "fbi" },
	{ 0x9DC66994, "fbi2" },
	{ 0xE8A8BDA8, "felon" },
	{ 0xFAAD85EE, "felon2" },
	{ 0x8911B9F5, "feltzer2" },
	{ 0x73920F8E, "firetruk" },
	{ 0x50B0215A, "flatbed" },
	{ 0x58E49664, "forklift" },
	{ 0xBC32A33B, "fq2" },
	{ 0x1DC0BA53, "fusilade" },
	{ 0x71CB2FFB, "fugitive" },
	{ 0x7836CE2F, "futo" },
	{ 0x9628879C, "granger" },
	{ 0x94B395C5, "gauntlet" },
	{ 0x34B7390F, "habanero" },
	{ 0x5A82F9AE, "hauler" },
	{ 0x1A7FCEFA, "handler" },
	{ 0x18F25AC7, "infernus" },
	{ 0xB3206692, "ingot" },
	{ 0x34DD8AA1, "intruder" },
	{ 0xB9CB3B69, "issi2" },
	{ 0xDAC67112, "jackal" },
	{ 0xF8D48E7A, "journey" },
	{ 0x3EAB5555, "jb700" },
	{ 0x206D1B68, "khamelion" },
	{ 0x4BA4E8DC, "landstalker" },
	{ 0x1BF8D381, "lguard" },
	{ 0x81634188, "manana" },
	{ 0x36848602, "mesa" },
	{ 0xD36A4B44, "mesa2" },
	{ 0x84F42E51, "mesa3" },
	{ 0x132D5A1A, "crusader" },
	{ 0xED7EADA4, "minivan" },
	{ 0xD138A6BB, "mixer" },
	{ 0x1C534995, "mixer2" },
	{ 0xE62B361B, "monroe" },
	{ 0x6A4BD8F6, "mower" },
	{ 0x35ED670B, "mule" },
	{ 0xC1632BEB, "mule2" },
	{ 0x506434F6, "oracle" },
	{ 0xE18195B2, "oracle2" },
	{ 0x21EEE87D, "packer" },
	{ 0xCFCFEB3B, "patriot" },
	{ 0x885F3671, "pbus" },
	{ 0xE9805550, "penumbra" },
	{ 0x6D19CCBC, "peyote" },
	{ 0x809AA4CB, "phantom" },
	{ 0x831A21D5, "phoenix" },
	{ 0x59E0FBF3, "picador" },
	{ 0x7DE35E7D, "pounder" },
	{ 0x79FBB0C5, "police" },
	{ 0x8A63C7B9, "police4" },
	{ 0x9F05F101, "police2" },
	{ 0x71FA16EA, "police3" },
	{ 0xA46462F7, "policeold1" },
	{ 0x95F4C618, "policeold2" },
	{ 0xF8DE29A8, "pony" },
	{ 0x38408341, "pony2" },
	{ 0xA988D3A2, "prairie" },
	{ 0x2C33B46E, "pranger" },
	{ 0x8FB66F9B, "premier" },
	{ 0xBB6B404F, "primo" },
	{ 0x153E1B0A, "proptrailer" },
	{ 0x6210CBB0, "rancherxl" },
	{ 0x7341576B, "rancherxl2" },
	{ 0x8CB29A14, "rapidgt" },
	{ 0x679450AF, "rapidgt2" },
	{ 0x9D96B45B, "radi" },
	{ 0xD83C13CE, "ratloader" },
	{ 0xB802DD46, "rebel" },
	{ 0xFF22D208, "regina" },
	{ 0x8612B64B, "rebel2" },
	{ 0xBE819C63, "rentalbus" },
	{ 0xF26CEFF9, "ruiner" },
	{ 0x4543B74D, "rumpo" },
	{ 0x961AFEF7, "rumpo2" },
	{ 0x2EA68690, "rhino" },
	{ 0xB822A1AA, "riot" },
	{ 0xCD935EF9, "ripley" },
	{ 0x7F5C91F1, "rocoto" },
	{ 0x2560B2FC, "romero" },
	{ 0x9B909C94, "sabregt" },
	{ 0xDC434E51, "sadler" },
	{ 0x2BC345D1, "sadler2" },
	{ 0xB9210FD0, "sandking" },
	{ 0x3AF8C345, "sandking2" },
	{ 0xB52B5113, "schafter2" },
	{ 0xD37B7976, "schwarzer" },
	{ 0x9A9FD3DF, "scrap" },
	{ 0x48CECED3, "seminole" },
	{ 0x50732C82, "sentinel" },
	{ 0x3412AE2D, "sentinel2" },
	{ 0xBD1B39C3, "zion" },
	{ 0xB8E2AE18, "zion2" },
	{ 0x4FB1A214, "serrano" },
	{ 0x9BAA707C, "sheriff" },
	{ 0x72935408, "sheriff2" },
	{ 0xCFB3870C, "speedo" },
	{ 0x2B6DC64A, "speedo2" },
	{ 0xA7EDE74D, "stanier" },
	{ 0x5C23AF9B, "stinger" },
	{ 0x82E499FA, "stingergt" },
	{ 0x6827CF72, "stockade" },
	{ 0xF337AB36, "stockade3" },
	{ 0x66B4FC45, "stratum" },
	{ 0x39DA2754, "sultan" },
	{ 0x42F2ED16, "superd" },
	{ 0x16E478C1, "surano" },
	{ 0x29B0DA97, "surfer" },
	{ 0xB1D80E06, "surfer2" },
	{ 0x8F0E3594, "surge" },
	{ 0x744CA80D, "taco" },
	{ 0xC3DDFDCE, "tailgater" },
	{ 0xC703DB5F, "taxi" },
	{ 0x72435A19, "trash" },
	{ 0x61D6BA8C, "tractor" },
	{ 0x843B73DE, "tractor2" },
	{ 0x562A97BD, "tractor3" },
	{ 0x3CC7F596, "graintrailer" },
	{ 0xE82AE656, "baletrailer" },
	{ 0x2E19879, "tiptruck" },
	{ 0xC7824E5E, "tiptruck2" },
	{ 0x1BB290BC, "tornado" },
	{ 0x5B42A5C4, "tornado2" },
	{ 0x690A4153, "tornado3" },
	{ 0x86CF7CDD, "tornado4" },
	{ 0x73B1C3CB, "tourbus" },
	{ 0xB12314E0, "towtruck" },
	{ 0xE5A2D6C6, "towtruck2" },
	{ 0x1ED0A534, "utillitruck" },
	{ 0x34E6BF6B, "utillitruck2" },
	{ 0x7F2153DF, "utillitruck3" },
	{ 0x1F3766E3, "voodoo2" },
	{ 0x69F06B57, "washington" },
	{ 0x8B13F083, "stretch" },
	{ 0x3E5F6B8, "youga" },
	{ 0x2D3BD401, "ztype" },
	{ 0x2EF89E46, "sanchez" },
	{ 0xA960B13E, "sanchez2" },
	{ 0xF4E1AA15, "scorcher" },
	{ 0x4339CD69, "tribike" },
	{ 0xB67597EC, "tribike2" },
	{ 0xE823FB48, "tribike3" },
	{ 0xCE23D3BF, "fixter" },
	{ 0x1ABA13B5, "cruiser" },
	{ 0x43779C54, "bmx" },
	{ 0xFDEFAEC3, "policeb" },
	{ 0x63ABADE7, "akuma" },
	{ 0xABB0C0, "carbonrs" },
	{ 0x806B9CC3, "bagger" },
	{ 0xF9300CC5, "bati" },
	{ 0xCADD5D2D, "bati2" },
	{ 0xCABD11E8, "ruffian" },
	{ 0x77934CEE, "daemon" },
	{ 0x9C669788, "double" },
	{ 0xC9CEAF06, "pcj" },
	{ 0xF79A00F7, "vader" },
	{ 0xCEC6B9B7, "vigero" },
	{ 0x350D1AB, "faggio2" },
	{ 0x11F76C14, "hexer" },
	{ 0x31F0B376, "annihilator" },
	{ 0x2F03547B, "buzzard" },
	{ 0x2C75F0DD, "buzzard2" },
	{ 0xFCFCB68B, "cargobob" },
	{ 0x60A7EA10, "cargobob2" },
	{ 0x53174EEF, "cargobob3" },
	{ 0x3E48BF23, "skylift" },
	{ 0x1517D4D9, "polmav" },
	{ 0x9D0450CA, "maverick" },
	{ 0xDA288376, "nemesis" },
	{ 0x2C634FBD, "frogger" },
	{ 0x742E9AC0, "frogger2" },
	{ 0xD9927FE3, "cuban800" },
	{ 0x39D6779E, "duster" },
	{ 0x81794C70, "stunt" },
	{ 0x97E55D11, "mammatus" },
	{ 0x3F119114, "jet" },
	{ 0xB79C1BF5, "shamal" },
	{ 0x250B0C5E, "luxor" },
	{ 0x761E2AD3, "titan" },
	{ 0xB39B0AE6, "lazer" },
	{ 0x15F27762, "cargoplane" },
	{ 0x17DF5EC2, "squalo" },
	{ 0xC1CE1183, "marquis" },
	{ 0x3D961290, "dinghy" },
	{ 0x107F392C, "dinghy2" },
	{ 0x33581161, "jetmax" },
	{ 0xE2E7D4AB, "predator" },
	{ 0x1149422F, "tropic" },
	{ 0xC2974024, "seashark" },
	{ 0xDB4388E4, "seashark2" },
	{ 0x2DFF622F, "submersible" },
	{ 0xCBB2BE0E, "trailers" },
	{ 0xA1DA3C91, "trailers2" },
	{ 0x8548036D, "trailers3" },
	{ 0x967620BE, "tvtrailer" },
	{ 0x174CB172, "raketrailer" },
	{ 0xD46F4737, "tanker" },
	{ 0x782A236D, "trailerlogs" },
	{ 0x7BE032C6, "tr2" },
	{ 0x6A59902D, "tr3" },
	{ 0x7CAB34D0, "tr4" },
	{ 0xAF62F6B2, "trflat" },
	{ 0x2A72BEAB, "trailersmall" },
	{ 0x9C429B6A, "velum" },
	{ 0xB779A091, "adder" },
	{ 0x9F4B77BE, "voltic" },
	{ 0x142E0DC3, "vacca" },
	{ 0xEB298297, "bifta" },
	{ 0xDC60D2B, "speeder" },
	{ 0x58B3979C, "paradise" },
	{ 0x5852838, "kalahari" },
	{ 0xB2A716A3, "jester" },
	{ 0x185484E1, "turismor" },
	{ 0x4FF77E37, "vestra" },
	{ 0x2DB8D1AA, "alpha" },
	{ 0x1D06D681, "huntley" },
	{ 0x6D6F8F43, "thrust" },
	{ 0xF77ADE32, "massacro" },
	{ 0xDA5819A3, "massacro2" },
	{ 0xAC5DF515, "zentorno" },
	{ 0xB820ED5E, "blade" },
	{ 0x47A6BC1, "glendale" },
	{ 0xE644E480, "panto" },
	{ 0x404B6381, "pigalle" },
	{ 0x51D83328, "warrener" },
	{ 0x322CF98F, "rhapsody" },
	{ 0xB6410173, "dubsta3" },
	{ 0xCD93A7DB, "monster" },
	{ 0x2C509634, "sovereign" },
	{ 0xF683EACA, "innovation" },
	{ 0x4B6C568A, "hakuchou" },
	{ 0xBF1691E0, "furoregt" },
	{ 0x9D80F93, "miljet" },
	{ 0x3C4E2113, "coquette2" },
	{ 0x6FF6914, "btype" },
	{ 0xE2C013E, "buffalo3" },
	{ 0xC96B73D9, "dominator2" },
	{ 0x14D22159, "gauntlet2" },
	{ 0x49863E9C, "marshall" },
	{ 0x2B26F456, "dukes" },
	{ 0xEC8F7094, "dukes2" },
	{ 0x72A4C31E, "stalion" },
	{ 0xE80F67EE, "stalion2" },
	{ 0x3DEE5EDA, "blista2" },
	{ 0xDCBC1C3B, "blista3" },
	{ 0xCA495705, "dodo" },
	{ 0xC07107EE, "submersible2" },
	{ 0x39D6E83F, "hydra" },
	{ 0x9114EADA, "insurgent" },
	{ 0x7B7E56F0, "insurgent2" },
	{ 0x83051506, "technical" },
	{ 0xFB133A17, "savage" },
	{ 0xA09E15FD, "valkyrie" },
	{ 0xAE2BFE94, "kuruma" },
	{ 0x187D938D, "kuruma2" },
	{ 0xBE0E6126, "jester2" },
	{ 0x3822BDFE, "casco" },
	{ 0x403820E8, "velum2" },
	{ 0x825A9F4C, "guardian" },
	{ 0x6882FA73, "enduro" },
	{ 0x26321E67, "lectro" },
	{ 0x2B7F9DE3, "slamvan" },
	{ 0x31ADBBFC, "slamvan2" },
	{ 0xDCE1D9F7, "ratloader2" },
	{ 0x4019CB4C, "swift2" },
	{ 0xB79F589E, "luxor2" },
	{ 0xA29D6D10, "feltzer3" },
	{ 0x767164D6, "osiris" },
	{ 0xE2504942, "virgo" },
	{ 0x5E4327C8, "windsor" },
	{ 0x6CBD1D6D, "besra" },
	{ 0xEBC24DF2, "swift" },
	{ 0xDB6B4924, "blimp2" },
	{ 0xAF599F01, "vindicator" },
	{ 0x3FD5AA2F, "toro" },
	{ 0x6322B39A, "t20" },
	{ 0x2EC385FE, "coquette3" },
	{ 0x14D69010, "chino" },
	{ 0xA7CE1BC5, "brawler" },
	{ 0xC397F748, "buccaneer2" },
	{ 0xAED64A63, "chino2" },
	{ 0x81A9CDDF, "faction" },
	{ 0x95466BDB, "faction2" },
	{ 0x1F52A43F, "moonbeam" },
	{ 0x710A2B9B, "moonbeam2" },
	{ 0x86618EDA, "primo2" },
	{ 0x779B4F2D, "voodoo" },
	{ 0x7B47A6A7, "lurcher" },
	{ 0xCE6B35A4, "btype2" },
	{ 0x6FF0F727, "baller3" },
	{ 0x25CBE2E2, "baller4" },
	{ 0x1C09CF5E, "baller5" },
	{ 0x27B4E6B0, "baller6" },
	{ 0x78BC1A3C, "cargobob4" },
	{ 0x360A438E, "cog55" },
	{ 0x29FCD3E4, "cog552" },
	{ 0x86FE0B60, "cognoscenti" },
	{ 0xDBF2D57A, "cognoscenti2" },
	{ 0x33B47F96, "dinghy4" },
	{ 0xF92AEC4D, "limo2" },
	{ 0x9CFFFC56, "mamba" },
	{ 0x8C2BD0DC, "nightshade" },
	{ 0xA774B5A6, "schafter3" },
	{ 0x58CF185C, "schafter4" },
	{ 0xCB0E7CD9, "schafter5" },
	{ 0x72934BE4, "schafter6" },
	{ 0xED762D49, "seashark3" },
	{ 0x1A144F2A, "speeder2" },
	{ 0x2A54C47D, "supervolito" },
	{ 0x9C5E5644, "supervolito2" },
	{ 0x362CAC6D, "toro2" },
	{ 0x56590FE9, "tropic2" },
	{ 0x5BFA5C4B, "valkyrie2" },
	{ 0x41B77FA4, "verlierer2" },
	{ 0x39F9C898, "tampa" },
	{ 0x25C5AF13, "banshee2" },
	{ 0xEE6024BC, "sultanrs" }
};
#pragma endregion
#pragma region ped hash map
static std::map<DWORD, std::string> pedhash_map = {
	{ 0xD7114C9, "player_zero" },
	{ 0x9B22DBAF, "player_one" },
	{ 0x9B810FA2, "player_two" },
	{ 0xCE5FF074, "a_c_boar" },
	{ 0xA8683715, "a_c_chimp" },
	{ 0xFCFA9E1E, "a_c_cow" },
	{ 0x644AC75E, "a_c_coyote" },
	{ 0xD86B5A95, "a_c_deer" },
	{ 0x2FD800B7, "a_c_fish" },
	{ 0x6AF51FAF, "a_c_hen" },
	{ 0x573201B8, "a_c_cat_01" },
	{ 0xAAB71F62, "a_c_chickenhawk" },
	{ 0x56E29962, "a_c_cormorant" },
	{ 0x18012A9F, "a_c_crow" },
	{ 0x8BBAB455, "a_c_dolphin" },
	{ 0x471BE4B2, "a_c_humpback" },
	{ 0x8D8AC8B9, "a_c_killerwhale" },
	{ 0x6A20728, "a_c_pigeon" },
	{ 0xD3939DFD, "a_c_seagull" },
	{ 0x3C831724, "a_c_sharkhammer" },
	{ 0xB11BAB56, "a_c_pig" },
	{ 0xC3B52966, "a_c_rat" },
	{ 0xC2D06F53, "a_c_rhesus" },
	{ 0x14EC17EA, "a_c_chop" },
	{ 0x4E8F95A2, "a_c_husky" },
	{ 0x1250D7BA, "a_c_mtlion" },
	{ 0x349F33E1, "a_c_retriever" },
	{ 0x6C3F072, "a_c_sharktiger" },
	{ 0x431FC24C, "a_c_shepherd" },
	{ 0x64611296, "s_m_m_movalien_01" },
	{ 0x303638A7, "a_f_m_beach_01" },
	{ 0xBE086EFD, "a_f_m_bevhills_01" },
	{ 0xA039335F, "a_f_m_bevhills_02" },
	{ 0x3BD99114, "a_f_m_bodybuild_01" },
	{ 0x1FC37DBC, "a_f_m_business_02" },
	{ 0x654AD86E, "a_f_m_downtown_01" },
	{ 0x9D3DCB7A, "a_f_m_eastsa_01" },
	{ 0x63C8D891, "a_f_m_eastsa_02" },
	{ 0xFAB48BCB, "a_f_m_fatbla_01" },
	{ 0xB5CF80E4, "a_f_m_fatcult_01" },
	{ 0x38BAD33B, "a_f_m_fatwhite_01" },
	{ 0x52C824DE, "a_f_m_ktown_01" },
	{ 0x41018151, "a_f_m_ktown_02" },
	{ 0x169BD1E1, "a_f_m_prolhost_01" },
	{ 0xDE0E0969, "a_f_m_salton_01" },
	{ 0xB097523B, "a_f_m_skidrow_01" },
	{ 0xCDE955D2, "a_f_m_soucentmc_01" },
	{ 0x745855A1, "a_f_m_soucent_01" },
	{ 0xF322D338, "a_f_m_soucent_02" },
	{ 0x505603B9, "a_f_m_tourist_01" },
	{ 0x8CA0C266, "a_f_m_trampbeac_01" },
	{ 0x48F96F5B, "a_f_m_tramp_01" },
	{ 0x61C81C85, "a_f_o_genstreet_01" },
	{ 0xBAD7BB80, "a_f_o_indian_01" },
	{ 0x47CF5E96, "a_f_o_ktown_01" },
	{ 0xCCFF7D8A, "a_f_o_salton_01" },
	{ 0x3DFA1830, "a_f_o_soucent_01" },
	{ 0xA56DE716, "a_f_o_soucent_02" },
	{ 0xC79F6928, "a_f_y_beach_01" },
	{ 0x445AC854, "a_f_y_bevhills_01" },
	{ 0x5C2CF7F8, "a_f_y_bevhills_02" },
	{ 0x20C8012F, "a_f_y_bevhills_03" },
	{ 0x36DF2D5D, "a_f_y_bevhills_04" },
	{ 0x2799EFD8, "a_f_y_business_01" },
	{ 0x31430342, "a_f_y_business_02" },
	{ 0xAE86FDB4, "a_f_y_business_03" },
	{ 0xB7C61032, "a_f_y_business_04" },
	{ 0xF5B0079D, "a_f_y_eastsa_01" },
	{ 0x438A4AE, "a_f_y_eastsa_02" },
	{ 0x51C03FA4, "a_f_y_eastsa_03" },
	{ 0x689C2A80, "a_f_y_epsilon_01" },
	{ 0x457C64FB, "a_f_y_fitness_01" },
	{ 0x13C4818C, "a_f_y_fitness_02" },
	{ 0x2F4AEC3E, "a_f_y_genhot_01" },
	{ 0x7DD8FB58, "a_f_y_golfer_01" },
	{ 0x30830813, "a_f_y_hiker_01" },
	{ 0x1475B827, "a_f_y_hippie_01" },
	{ 0x8247D331, "a_f_y_hipster_01" },
	{ 0x97F5FE8D, "a_f_y_hipster_02" },
	{ 0xA5BA9A16, "a_f_y_hipster_03" },
	{ 0x199881DC, "a_f_y_hipster_04" },
	{ 0x92D9CC1, "a_f_y_indian_01" },
	{ 0xDB134533, "a_f_y_juggalo_01" },
	{ 0xC7496729, "a_f_y_runner_01" },
	{ 0x3F789426, "a_f_y_rurmeth_01" },
	{ 0xDB5EC400, "a_f_y_scdressy_01" },
	{ 0x695FE666, "a_f_y_skater_01" },
	{ 0x2C641D7A, "a_f_y_soucent_01" },
	{ 0x5A8EF9CF, "a_f_y_soucent_02" },
	{ 0x87B25415, "a_f_y_soucent_03" },
	{ 0x550C79C6, "a_f_y_tennis_01" },
	{ 0x9CF26183, "a_f_y_topless_01" },
	{ 0x563B8570, "a_f_y_tourist_01" },
	{ 0x9123FB40, "a_f_y_tourist_02" },
	{ 0x19F41F65, "a_f_y_vinewood_01" },
	{ 0xDAB6A0EB, "a_f_y_vinewood_02" },
	{ 0x379DDAB8, "a_f_y_vinewood_03" },
	{ 0xFAE46146, "a_f_y_vinewood_04" },
	{ 0xC41B062E, "a_f_y_yoga_01" },
	{ 0x5442C66B, "a_m_m_acult_01" },
	{ 0xD172497E, "a_m_m_afriamer_01" },
	{ 0x403DB4FD, "a_m_m_beach_01" },
	{ 0x787FA588, "a_m_m_beach_02" },
	{ 0x54DBEE1F, "a_m_m_bevhills_01" },
	{ 0x3FB5C3D3, "a_m_m_bevhills_02" },
	{ 0x7E6A64B7, "a_m_m_business_01" },
	{ 0xF9A6F53F, "a_m_m_eastsa_01" },
	{ 0x7DD91AC, "a_m_m_eastsa_02" },
	{ 0x94562DD7, "a_m_m_farmer_01" },
	{ 0x61D201B3, "a_m_m_fatlatin_01" },
	{ 0x6DD569F, "a_m_m_genfat_01" },
	{ 0x13AEF042, "a_m_m_genfat_02" },
	{ 0xA9EB0E42, "a_m_m_golfer_01" },
	{ 0x6BD9B68C, "a_m_m_hasjew_01" },
	{ 0x6C9B2849, "a_m_m_hillbilly_01" },
	{ 0x7B0E452F, "a_m_m_hillbilly_02" },
	{ 0xDDCAAA2C, "a_m_m_indian_01" },
	{ 0xD15D7E71, "a_m_m_ktown_01" },
	{ 0x2FDE6EB7, "a_m_m_malibu_01" },
	{ 0xDD817EAD, "a_m_m_mexcntry_01" },
	{ 0xB25D16B2, "a_m_m_mexlabor_01" },
	{ 0x681BD012, "a_m_m_og_boss_01" },
	{ 0xECCA8C15, "a_m_m_paparazzi_01" },
	{ 0xA9D9B69E, "a_m_m_polynesian_01" },
	{ 0x9712C38F, "a_m_m_prolhost_01" },
	{ 0x3BAD4184, "a_m_m_rurmeth_01" },
	{ 0x4F2E038A, "a_m_m_salton_01" },
	{ 0x60F4A717, "a_m_m_salton_02" },
	{ 0xB28C4A45, "a_m_m_salton_03" },
	{ 0x964511B7, "a_m_m_salton_04" },
	{ 0xD9D7588C, "a_m_m_skater_01" },
	{ 0x1EEA6BD, "a_m_m_skidrow_01" },
	{ 0xB8D69E3, "a_m_m_socenlat_01" },
	{ 0x6857C9B7, "a_m_m_soucent_01" },
	{ 0x9F6D37E1, "a_m_m_soucent_02" },
	{ 0x8BD990BA, "a_m_m_soucent_03" },
	{ 0xC2FBFEFE, "a_m_m_soucent_04" },
	{ 0xC2A87702, "a_m_m_stlat_02" },
	{ 0x546A5344, "a_m_m_tennis_01" },
	{ 0xC89F0184, "a_m_m_tourist_01" },
	{ 0x53B57EB0, "a_m_m_trampbeac_01" },
	{ 0x1EC93FD0, "a_m_m_tramp_01" },
	{ 0xE0E69974, "a_m_m_tranvest_01" },
	{ 0xF70EC5C4, "a_m_m_tranvest_02" },
	{ 0x55446010, "a_m_o_acult_01" },
	{ 0x4BA14CCA, "a_m_o_acult_02" },
	{ 0x8427D398, "a_m_o_beach_01" },
	{ 0xAD54E7A8, "a_m_o_genstreet_01" },
	{ 0x1536D95A, "a_m_o_ktown_01" },
	{ 0x20208E4D, "a_m_o_salton_01" },
	{ 0x2AD8921B, "a_m_o_soucent_01" },
	{ 0x4086BD77, "a_m_o_soucent_02" },
	{ 0xE32D8D0, "a_m_o_soucent_03" },
	{ 0x174D4245, "a_m_o_tramp_01" },
	{ 0xB564882B, "a_m_y_acult_01" },
	{ 0x80E59F2E, "a_m_y_acult_02" },
	{ 0x7E0961B8, "a_m_y_beachvesp_01" },
	{ 0xCA56FA52, "a_m_y_beachvesp_02" },
	{ 0xD1FEB884, "a_m_y_beach_01" },
	{ 0x23C7DC11, "a_m_y_beach_02" },
	{ 0xE7A963D9, "a_m_y_beach_03" },
	{ 0x76284640, "a_m_y_bevhills_01" },
	{ 0x668BA707, "a_m_y_bevhills_02" },
	{ 0x379F9596, "a_m_y_breakdance_01" },
	{ 0x9AD32FE9, "a_m_y_busicas_01" },
	{ 0xC99F21C4, "a_m_y_business_01" },
	{ 0xB3B3F5E6, "a_m_y_business_02" },
	{ 0xA1435105, "a_m_y_business_03" },
	{ 0xFDC653C7, "a_m_y_cyclist_01" },
	{ 0xFF3E88AB, "a_m_y_dhill_01" },
	{ 0x2DADF4AA, "a_m_y_downtown_01" },
	{ 0xA4471173, "a_m_y_eastsa_01" },
	{ 0x168775F6, "a_m_y_eastsa_02" },
	{ 0x77D41A3E, "a_m_y_epsilon_01" },
	{ 0xAA82FF9B, "a_m_y_epsilon_02" },
	{ 0xD1CCE036, "a_m_y_gay_01" },
	{ 0xA5720781, "a_m_y_gay_02" },
	{ 0x9877EF71, "a_m_y_genstreet_01" },
	{ 0x3521A8D2, "a_m_y_genstreet_02" },
	{ 0xD71FE131, "a_m_y_golfer_01" },
	{ 0xE16D8F01, "a_m_y_hasjew_01" },
	{ 0x50F73C0C, "a_m_y_hiker_01" },
	{ 0x7D03E617, "a_m_y_hippy_01" },
	{ 0x2307A353, "a_m_y_hipster_01" },
	{ 0x14D506EE, "a_m_y_hipster_02" },
	{ 0x4E4179C6, "a_m_y_hipster_03" },
	{ 0x2A22FBCE, "a_m_y_indian_01" },
	{ 0x2DB7EEF3, "a_m_y_jetski_01" },
	{ 0x91CA3E2C, "a_m_y_juggalo_01" },
	{ 0x1AF6542C, "a_m_y_ktown_01" },
	{ 0x297FF13F, "a_m_y_ktown_02" },
	{ 0x132C1A8E, "a_m_y_latino_01" },
	{ 0x696BE0A9, "a_m_y_methhead_01" },
	{ 0x3053E555, "a_m_y_mexthug_01" },
	{ 0x64FDEA7D, "a_m_y_motox_01" },
	{ 0x77AC8FDA, "a_m_y_motox_02" },
	{ 0x4B652906, "a_m_y_musclbeac_01" },
	{ 0xC923247C, "a_m_y_musclbeac_02" },
	{ 0x8384FC9F, "a_m_y_polynesian_01" },
	{ 0xF561A4C6, "a_m_y_roadcyc_01" },
	{ 0x25305EEE, "a_m_y_runner_01" },
	{ 0x843D9D0F, "a_m_y_runner_02" },
	{ 0xD7606C30, "a_m_y_salton_01" },
	{ 0xC1C46677, "a_m_y_skater_01" },
	{ 0xAFFAC2E4, "a_m_y_skater_02" },
	{ 0xE716BDCB, "a_m_y_soucent_01" },
	{ 0xACA3C8CA, "a_m_y_soucent_02" },
	{ 0xC3F0F764, "a_m_y_soucent_03" },
	{ 0x8A3703F1, "a_m_y_soucent_04" },
	{ 0xCF92ADE9, "a_m_y_stbla_01" },
	{ 0x98C7404F, "a_m_y_stbla_02" },
	{ 0x8674D5FC, "a_m_y_stlat_01" },
	{ 0x2418C430, "a_m_y_stwhi_01" },
	{ 0x36C6E98C, "a_m_y_stwhi_02" },
	{ 0xB7292F0C, "a_m_y_sunbathe_01" },
	{ 0xEAC2C7EE, "a_m_y_surfer_01" },
	{ 0xC19377E7, "a_m_y_vindouche_01" },
	{ 0x4B64199D, "a_m_y_vinewood_01" },
	{ 0x5D15BD00, "a_m_y_vinewood_02" },
	{ 0x1FDF4294, "a_m_y_vinewood_03" },
	{ 0x31C9E669, "a_m_y_vinewood_04" },
	{ 0xAB0A7155, "a_m_y_yoga_01" },
	{ 0x855E36A3, "u_m_y_proldriver_01" },
	{ 0x3C438CD2, "u_m_y_rsranger_01" },
	{ 0x6AF4185D, "u_m_y_sbike" },
	{ 0x9194CE03, "u_m_y_staggrm_01" },
	{ 0x94AE2B8C, "u_m_y_tattoo_01" },
	{ 0x89768941, "csb_abigail" },
	{ 0x703F106, "csb_anita" },
	{ 0xA5C787B6, "csb_anton" },
	{ 0xABEF0004, "csb_ballasog" },
	{ 0x82BF7EA1, "csb_bride" },
	{ 0x8CDCC057, "csb_burgerdrug" },
	{ 0x4430687, "csb_car3guy1" },
	{ 0x1383A508, "csb_car3guy2" },
	{ 0xA347CA8A, "csb_chef" },
	{ 0xA8C22996, "csb_chin_goon" },
	{ 0xCAE9E5D5, "csb_cletus" },
	{ 0x9AB35F63, "csb_cop" },
	{ 0xA44F6F8B, "csb_customer" },
	{ 0xB58D2529, "csb_denise_friend" },
	{ 0x1BCC157B, "csb_fos_rep" },
	{ 0xA28E71D7, "csb_g" },
	{ 0x7AAB19D2, "csb_groom" },
	{ 0xE8594E22, "csb_grove_str_dlr" },
	{ 0xEC9E8F1C, "csb_hao" },
	{ 0x6F139B54, "csb_hugh" },
	{ 0xE3420BDB, "csb_imran" },
	{ 0xC2005A40, "csb_janitor" },
	{ 0xBCC475CB, "csb_maude" },
	{ 0x613E626C, "csb_mweather" },
	{ 0xC0DB04CF, "csb_ortega" },
	{ 0xF41F399B, "csb_oscar" },
	{ 0x2F4AFE35, "csb_porndudes" },
	{ 0x8A8298FA, "csb_porndudes_p" },
	{ 0xF00B49DB, "csb_prologuedriver" },
	{ 0x7FA2F024, "csb_prolsec" },
	{ 0xC2800DBE, "csb_ramp_gang" },
	{ 0x858C94B8, "csb_ramp_hic" },
	{ 0x21F58BB4, "csb_ramp_hipster" },
	{ 0x616C97B9, "csb_ramp_marine" },
	{ 0xF64ED7D0, "csb_ramp_mex" },
	{ 0x2E420A24, "csb_reporter" },
	{ 0xAA64168C, "csb_roccopelosi" },
	{ 0x8BE12CEC, "csb_screen_writer" },
	{ 0xAEEA76B5, "csb_stripper_01" },
	{ 0x81441B71, "csb_stripper_02" },
	{ 0x6343DD19, "csb_tonya" },
	{ 0xDE2937F3, "csb_trafficwarden" },
	{ 0x95EF18E3, "cs_amandatownley" },
	{ 0xE7565327, "cs_andreas" },
	{ 0x26C3D079, "cs_ashley" },
	{ 0x9760192E, "cs_bankman" },
	{ 0x69591CF7, "cs_barry" },
	{ 0x7B846512, "cs_barry_p" },
	{ 0xB46EC356, "cs_beverly" },
	{ 0x908D8694, "cs_beverly_p" },
	{ 0xEFE5AFE6, "cs_brad" },
	{ 0x7228AF60, "cs_bradcadaver" },
	{ 0x8CCE790F, "cs_carbuyer" },
	{ 0xEA969C40, "cs_casey" },
	{ 0x30DB9D7B, "cs_chengsr" },
	{ 0xC1F380E6, "cs_chrisformage" },
	{ 0xDBCB9834, "cs_clay" },
	{ 0xCE81655, "cs_dale" },
	{ 0x8587248C, "cs_davenorton" },
	{ 0xECD04FE9, "cs_debra" },
	{ 0x6F802738, "cs_denise" },
	{ 0x2F016D02, "cs_devin" },
	{ 0x4772AF42, "cs_dom" },
	{ 0x3C60A153, "cs_dreyfuss" },
	{ 0xA3A35C2F, "cs_drfriedlander" },
	{ 0x47035EC1, "cs_fabien" },
	{ 0x585C0B52, "cs_fbisuit_01" },
	{ 0x62547E7, "cs_floyd" },
	{ 0xF9513F1, "cs_guadalope" },
	{ 0xC314F727, "cs_gurk" },
	{ 0x5B44892C, "cs_hunter" },
	{ 0x3034F9E2, "cs_janet" },
	{ 0x4440A804, "cs_jewelass" },
	{ 0x39677BD, "cs_jimmyboston" },
	{ 0xB8CC92B4, "cs_jimmydisanto" },
	{ 0xF09D5E29, "cs_joeminuteman" },
	{ 0xFA8AB881, "cs_johnnyklebitz" },
	{ 0x459762CA, "cs_josef" },
	{ 0x450EEF9D, "cs_josh" },
	{ 0x45463A0D, "cs_lamardavis" },
	{ 0x38951A1B, "cs_lazlow" },
	{ 0xB594F5C3, "cs_lestercrest" },
	{ 0x72551375, "cs_lifeinvad_01" },
	{ 0x5816C61A, "cs_magenta" },
	{ 0xFBB374CA, "cs_manuel" },
	{ 0x574DE134, "cs_marnie" },
	{ 0x43595670, "cs_martinmadrazo" },
	{ 0x998C7AD, "cs_maryann" },
	{ 0x70AEB9C8, "cs_michelle" },
	{ 0xB76A330F, "cs_milton" },
	{ 0x45918E44, "cs_molly" },
	{ 0x4BBA84D9, "cs_movpremf_01" },
	{ 0x8D67EE7D, "cs_movpremmale" },
	{ 0xC3CC9A75, "cs_mrk" },
	{ 0xCBFDA3CF, "cs_mrsphillips" },
	{ 0x4F921E6E, "cs_mrs_thornhill" },
	{ 0x4EFEB1F0, "cs_natalia" },
	{ 0x7896DA94, "cs_nervousron" },
	{ 0xE1479C0B, "cs_nigel" },
	{ 0x1EEC7BDC, "cs_old_man1a" },
	{ 0x98F9E770, "cs_old_man2" },
	{ 0x8B70B405, "cs_omega" },
	{ 0xAD340F5A, "cs_orleans" },
	{ 0x6B38B8F8, "cs_paper" },
	{ 0xCE787988, "cs_paper_p" },
	{ 0xDF8B1301, "cs_patricia" },
	{ 0x4D6DE57E, "cs_priest" },
	{ 0x1E9314A2, "cs_prolsec_02" },
	{ 0x46521A32, "cs_russiandrunk" },
	{ 0xC0937202, "cs_siemonyetarian" },
	{ 0xF6D1E04E, "cs_solomon" },
	{ 0xA4E0A1FE, "cs_stevehains" },
	{ 0x893D6805, "cs_stretch" },
	{ 0x42FE5370, "cs_tanisha" },
	{ 0x8864083D, "cs_taocheng" },
	{ 0x53536529, "cs_taostranslator" },
	{ 0x5C26040A, "cs_tenniscoach" },
	{ 0x3A5201C5, "cs_terry" },
	{ 0x69E8ABC3, "cs_tom" },
	{ 0x8C0FD4E2, "cs_tomepsilon" },
	{ 0x609B130, "cs_tracydisanto" },
	{ 0xD266D9D6, "cs_wade" },
	{ 0xEAACAAF0, "cs_zimbor" },
	{ 0x158C439C, "g_f_y_ballas_01" },
	{ 0x4E0CE5D3, "g_f_y_families_01" },
	{ 0xFD5537DE, "g_f_y_lost_01" },
	{ 0x5AA42C21, "g_f_y_vagos_01" },
	{ 0xF1E823A2, "g_m_m_armboss_01" },
	{ 0xFDA94268, "g_m_m_armgoon_01" },
	{ 0xE7714013, "g_m_m_armlieut_01" },
	{ 0xF6157D8F, "g_m_m_chemwork_01" },
	{ 0x9D679EF6, "g_m_m_chemwork_01_p" },
	{ 0xB9DD0300, "g_m_m_chiboss_01" },
	{ 0x99478ECD, "g_m_m_chiboss_01_p" },
	{ 0x106D9A99, "g_m_m_chicold_01" },
	{ 0xD6CB60B2, "g_m_m_chicold_01_p" },
	{ 0x7E4F763F, "g_m_m_chigoon_01" },
	{ 0xF0B79FE1, "g_m_m_chigoon_01_p" },
	{ 0xFF71F826, "g_m_m_chigoon_02" },
	{ 0x352A026F, "g_m_m_korboss_01" },
	{ 0x5761F4AD, "g_m_m_mexboss_01" },
	{ 0x4914D813, "g_m_m_mexboss_02" },
	{ 0xC54E878A, "g_m_y_armgoon_02" },
	{ 0x68709618, "g_m_y_azteca_01" },
	{ 0xF42EE883, "g_m_y_ballaeast_01" },
	{ 0x231AF63F, "g_m_y_ballaorig_01" },
	{ 0x23B88069, "g_m_y_ballasout_01" },
	{ 0xE83B93B7, "g_m_y_famca_01" },
	{ 0xDB729238, "g_m_y_famdnf_01" },
	{ 0x84302B09, "g_m_y_famfor_01" },
	{ 0x247502A9, "g_m_y_korean_01" },
	{ 0x8FEDD989, "g_m_y_korean_02" },
	{ 0x7CCBE17A, "g_m_y_korlieut_01" },
	{ 0x4F46D607, "g_m_y_lost_01" },
	{ 0x3D843282, "g_m_y_lost_02" },
	{ 0x32B11CDC, "g_m_y_lost_03" },
	{ 0xBDDD5546, "g_m_y_mexgang_01" },
	{ 0x26EF3426, "g_m_y_mexgoon_01" },
	{ 0x31A3498E, "g_m_y_mexgoon_02" },
	{ 0x964D12DC, "g_m_y_mexgoon_03" },
	{ 0x3A9C818D, "g_m_y_mexgoon_03_p" },
	{ 0x4F3FBA06, "g_m_y_pologoon_01" },
	{ 0x925F7838, "g_m_y_pologoon_01_p" },
	{ 0xA2E86156, "g_m_y_pologoon_02" },
	{ 0x59279E8B, "g_m_y_pologoon_02_p" },
	{ 0x905CE0CA, "g_m_y_salvaboss_01" },
	{ 0x278C8CB7, "g_m_y_salvagoon_01" },
	{ 0x3273A285, "g_m_y_salvagoon_02" },
	{ 0x3B8C510, "g_m_y_salvagoon_03" },
	{ 0x70C720B0, "g_m_y_salvagoon_03_p" },
	{ 0xFD1C49BB, "g_m_y_strpunk_01" },
	{ 0xDA1EAC6, "g_m_y_strpunk_02" },
	{ 0x3B474ADF, "hc_driver" },
	{ 0xB881AEE, "hc_gunman" },
	{ 0x99BB00F8, "hc_hacker" },
	{ 0x400AEC41, "ig_abigail" },
	{ 0x6D1E15F7, "ig_amandatownley" },
	{ 0x47E4EEA0, "ig_andreas" },
	{ 0x7EF440DB, "ig_ashley" },
	{ 0xA70B4A92, "ig_ballasog" },
	{ 0x909D9E7F, "ig_bankman" },
	{ 0x2F8845A3, "ig_barry" },
	{ 0x6BE09789, "ig_barry_p" },
	{ 0x5746CD96, "ig_bestmen" },
	{ 0xBDA21E5C, "ig_beverly" },
	{ 0xD2318967, "ig_beverly_p" },
	{ 0xBDBB4922, "ig_brad" },
	{ 0x6162EC47, "ig_bride" },
	{ 0x84F9E937, "ig_car3guy1" },
	{ 0x75C34ACA, "ig_car3guy2" },
	{ 0xE0FA2554, "ig_casey" },
	{ 0x49EADBF6, "ig_chef" },
	{ 0xAAE4EA7B, "ig_chengsr" },
	{ 0x286E54A7, "ig_chrisformage" },
	{ 0x6CCFE08A, "ig_clay" },
	{ 0x9D0087A8, "ig_claypain" },
	{ 0xE6631195, "ig_cletus" },
	{ 0x467415E9, "ig_dale" },
	{ 0x15CD4C33, "ig_davenorton" },
	{ 0x820B33BD, "ig_denise" },
	{ 0x7461A0B0, "ig_devin" },
	{ 0x9C2DB088, "ig_dom" },
	{ 0xDA890932, "ig_dreyfuss" },
	{ 0xCBFC0DF5, "ig_drfriedlander" },
	{ 0xD090C350, "ig_fabien" },
	{ 0x3AE4A33B, "ig_fbisuit_01" },
	{ 0xB1B196B2, "ig_floyd" },
	{ 0xFECE8B85, "ig_groom" },
	{ 0x65978363, "ig_hao" },
	{ 0xCE1324DE, "ig_hunter" },
	{ 0xD6D9C49, "ig_janet" },
	{ 0x7A32EE74, "ig_jay_norris" },
	{ 0xF5D26BB, "ig_jewelass" },
	{ 0xEDA0082D, "ig_jimmyboston" },
	{ 0x570462B9, "ig_jimmydisanto" },
	{ 0xBE204C9B, "ig_joeminuteman" },
	{ 0x87CA80AE, "ig_johnnyklebitz" },
	{ 0xE11A9FB4, "ig_josef" },
	{ 0x799E9EEE, "ig_josh" },
	{ 0x5B3BD90D, "ig_kerrymcintosh" },
	{ 0x65B93076, "ig_lamardavis" },
	{ 0xDFE443E5, "ig_lazlow" },
	{ 0x4DA6E849, "ig_lestercrest" },
	{ 0x5389A93C, "ig_lifeinvad_01" },
	{ 0x27BD51D4, "ig_lifeinvad_02" },
	{ 0xFCDC910A, "ig_magenta" },
	{ 0xFD418E10, "ig_manuel" },
	{ 0x188232D0, "ig_marnie" },
	{ 0xA36F9806, "ig_maryann" },
	{ 0x3BE8287E, "ig_maude" },
	{ 0xBF9672F4, "ig_michelle" },
	{ 0xCB3059B2, "ig_milton" },
	{ 0xAF03DDE1, "ig_molly" },
	{ 0xEDDCAB6D, "ig_mrk" },
	{ 0x3862EEA8, "ig_mrsphillips" },
	{ 0x1E04A96B, "ig_mrs_thornhill" },
	{ 0xDE17DD3B, "ig_natalia" },
	{ 0xBD006AF1, "ig_nervousron" },
	{ 0xC8B7167D, "ig_nigel" },
	{ 0x719D27F4, "ig_old_man1a" },
	{ 0xEF154C47, "ig_old_man2" },
	{ 0x60E6A7D8, "ig_omega" },
	{ 0x2DC6D3E7, "ig_oneil" },
	{ 0x61D4C771, "ig_orleans" },
	{ 0x26A562B7, "ig_ortega" },
	{ 0x999B00C6, "ig_paper" },
	{ 0xC56E118C, "ig_patricia" },
	{ 0x6437E77D, "ig_priest" },
	{ 0x27B3AD75, "ig_prolsec_02" },
	{ 0xE52E126C, "ig_ramp_gang" },
	{ 0x45753032, "ig_ramp_hic" },
	{ 0xDEEF9F6E, "ig_ramp_hipster" },
	{ 0xE6AC74A4, "ig_ramp_mex" },
	{ 0xD5BA52FF, "ig_roccopelosi" },
	{ 0x3D0A5EB1, "ig_russiandrunk" },
	{ 0xFFE63677, "ig_screen_writer" },
	{ 0x4C7B2F05, "ig_siemonyetarian" },
	{ 0x86BDFE26, "ig_solomon" },
	{ 0x382121C8, "ig_stevehains" },
	{ 0x36984358, "ig_stretch" },
	{ 0xE793C8E8, "ig_talina" },
	{ 0xD810489, "ig_tanisha" },
	{ 0xDC5C5EA5, "ig_taocheng" },
	{ 0x7C851464, "ig_taostranslator" },
	{ 0x21D46437, "ig_taostranslator_p" },
	{ 0xA23B5F57, "ig_tenniscoach" },
	{ 0x67000B94, "ig_terry" },
	{ 0xCD777AAA, "ig_tomepsilon" },
	{ 0xCAC85344, "ig_tonya" },
	{ 0xDE352A35, "ig_tracydisanto" },
	{ 0x5719786D, "ig_trafficwarden" },
	{ 0x5265F707, "ig_tylerdix" },
	{ 0x92991B72, "ig_wade" },
	{ 0xB34D6F5, "ig_zimbor" },
	{ 0x73DEA88B, "mp_f_deadhooker" },
	{ 0x9C9EFFD8, "mp_f_freemode_01" },
	{ 0xD128FF9D, "mp_f_misty_01" },
	{ 0x2970A494, "mp_f_stripperlite" },
	{ 0x6C9DD7C9, "mp_g_m_pros_01" },
	{ 0x45F92D79, "mp_headtargets" },
	{ 0xC0F371B7, "mp_m_claude_01" },
	{ 0x45348DBB, "mp_m_exarmy_01" },
	{ 0x33A464E5, "mp_m_famdd_01" },
	{ 0x5CDEF405, "mp_m_fibsec_01" },
	{ 0x705E61F2, "mp_m_freemode_01" },
	{ 0x38430167, "mp_m_marston_01" },
	{ 0xEEDACFC9, "mp_m_niko_01" },
	{ 0x18CE57D0, "mp_m_shopkeep_01" },
	{ 0xCDEF5408, "mp_s_m_armoured_01" },
	{ 0x163B875B, "s_f_m_fembarber" },
	{ 0xE093C5C6, "s_f_m_maid_01" },
	{ 0xAE47E4B0, "s_f_m_shop_high" },
	{ 0x312B5BC0, "s_f_m_sweatshop_01" },
	{ 0x5D71A46F, "s_f_y_airhostess_01" },
	{ 0x780C01BD, "s_f_y_bartender_01" },
	{ 0x4A8E5536, "s_f_y_baywatch_01" },
	{ 0x15F8700D, "s_f_y_cop_01" },
	{ 0x69F46BF3, "s_f_y_factory_01" },
	{ 0x28ABF95, "s_f_y_hooker_01" },
	{ 0x14C3E407, "s_f_y_hooker_02" },
	{ 0x31640AC, "s_f_y_hooker_03" },
	{ 0xD55B2BF5, "s_f_y_migrant_01" },
	{ 0x2300C816, "s_f_y_movprem_01" },
	{ 0x9FC7F637, "s_f_y_ranger_01" },
	{ 0xAB594AB6, "s_f_y_scrubs_01" },
	{ 0x4161D042, "s_f_y_sheriff_01" },
	{ 0xA96E2604, "s_f_y_shop_low" },
	{ 0x3EECBA5D, "s_f_y_shop_mid" },
	{ 0x5C14EDFA, "s_f_y_stripperlite" },
	{ 0x52580019, "s_f_y_stripper_01" },
	{ 0x6E0FB794, "s_f_y_stripper_02" },
	{ 0x8502B6B2, "s_f_y_sweatshop_01" },
	{ 0xDE9A30A, "s_m_m_ammucountry" },
	{ 0x95C76ECD, "s_m_m_armoured_01" },
	{ 0x63858A4A, "s_m_m_armoured_02" },
	{ 0x40EABE3, "s_m_m_autoshop_01" },
	{ 0xF06B849D, "s_m_m_autoshop_02" },
	{ 0x9FD4292D, "s_m_m_bouncer_01" },
	{ 0x2EFEAFD5, "s_m_m_chemsec_01" },
	{ 0x625D6958, "s_m_m_ciasec_01" },
	{ 0x1A021B83, "s_m_m_cntrybar_01" },
	{ 0x14D7B4E0, "s_m_m_dockwork_01" },
	{ 0xD47303AC, "s_m_m_doctor_01" },
	{ 0xEDBC7546, "s_m_m_fiboffice_01" },
	{ 0x26F067AD, "s_m_m_fiboffice_02" },
	{ 0xA956BD9E, "s_m_m_gaffer_01" },
	{ 0x49EA5685, "s_m_m_gardener_01" },
	{ 0x1880ED06, "s_m_m_gentransport" },
	{ 0x418DFF92, "s_m_m_hairdress_01" },
	{ 0xF161D212, "s_m_m_highsec_01" },
	{ 0x2930C1AB, "s_m_m_highsec_02" },
	{ 0xA96BD9EC, "s_m_m_janitor" },
	{ 0x9E80D2CE, "s_m_m_lathandy_01" },
	{ 0xDE0077FD, "s_m_m_lifeinvad_01" },
	{ 0xDB9C0997, "s_m_m_linecook" },
	{ 0x765AAAE4, "s_m_m_lsmetro_01" },
	{ 0x7EA4FFA6, "s_m_m_mariachi_01" },
	{ 0xF2DAA2ED, "s_m_m_marine_01" },
	{ 0xF0259D83, "s_m_m_marine_02" },
	{ 0xED0CE4C6, "s_m_m_migrant_01" },
	{ 0xAC4B4506, "u_m_y_zombie_01" },
	{ 0xD85E6D28, "s_m_m_movprem_01" },
	{ 0xE7B31432, "s_m_m_movspace_01" },
	{ 0xB353629E, "s_m_m_paramedic_01" },
	{ 0xE75B4B1C, "s_m_m_pilot_01" },
	{ 0xF63DE8E1, "s_m_m_pilot_02" },
	{ 0x62599034, "s_m_m_postal_01" },
	{ 0x7367324F, "s_m_m_postal_02" },
	{ 0x56C96FC6, "s_m_m_prisguard_01" },
	{ 0x4117D39B, "s_m_m_scientist_01" },
	{ 0xD768B228, "s_m_m_security_01" },
	{ 0x1AE8BB58, "s_m_m_snowcop_01" },
	{ 0x795AC7A8, "s_m_m_strperf_01" },
	{ 0x1C0077FB, "s_m_m_strpreach_01" },
	{ 0xCE9113A9, "s_m_m_strvend_01" },
	{ 0x59511A6C, "s_m_m_trucker_01" },
	{ 0x9FC37F22, "s_m_m_ups_01" },
	{ 0xD0BDE116, "s_m_m_ups_02" },
	{ 0xAD9EF1BB, "s_m_o_busker_01" },
	{ 0x62018559, "s_m_y_airworker" },
	{ 0x9E08633D, "s_m_y_ammucity_01" },
	{ 0x62CC28E2, "s_m_y_armymech_01" },
	{ 0xB2273D4E, "s_m_y_autopsy_01" },
	{ 0xE5A11106, "s_m_y_barman_01" },
	{ 0xB4A6862, "s_m_y_baywatch_01" },
	{ 0xB3F3EE34, "s_m_y_blackops_01" },
	{ 0x7A05FA59, "s_m_y_blackops_02" },
	{ 0xD8F9CD47, "s_m_y_busboy_01" },
	{ 0xF977CEB, "s_m_y_chef_01" },
	{ 0x4498DDE, "s_m_y_clown_01" },
	{ 0xD7DA9E99, "s_m_y_construct_01" },
	{ 0xC5FEFADE, "s_m_y_construct_02" },
	{ 0x5E3DA4A4, "s_m_y_cop_01" },
	{ 0xE497BBEF, "s_m_y_dealer_01" },
	{ 0x9B557274, "s_m_y_devinsec_01" },
	{ 0x867639D1, "s_m_y_dockwork_01" },
	{ 0x22911304, "s_m_y_doorman_01" },
	{ 0x75D30A91, "s_m_y_dwservice_01" },
	{ 0xF5908A06, "s_m_y_dwservice_02" },
	{ 0x4163A158, "s_m_y_factory_01" },
	{ 0xB6B1EDA8, "s_m_y_fireman_01" },
	{ 0xEE75A00F, "s_m_y_garbage" },
	{ 0x309E7DEA, "s_m_y_grip_01" },
	{ 0x739B1EF5, "s_m_y_hwaycop_01" },
	{ 0x65793043, "s_m_y_marine_01" },
	{ 0x58D696FE, "s_m_y_marine_02" },
	{ 0x72C0CAD2, "s_m_y_marine_03" },
	{ 0x3CDCA742, "s_m_y_mime" },
	{ 0x48114518, "s_m_y_pestcont_01" },
	{ 0xAB300C07, "s_m_y_pilot_01" },
	{ 0x5F2113A1, "s_m_y_prismuscl_01" },
	{ 0xB1BB9B59, "s_m_y_prisoner_01" },
	{ 0xEF7135AE, "s_m_y_ranger_01" },
	{ 0xC05E1399, "s_m_y_robber_01" },
	{ 0xB144F9B9, "s_m_y_sheriff_01" },
	{ 0x6E122C06, "s_m_y_shop_mask" },
	{ 0x927F2323, "s_m_y_strvend_01" },
	{ 0x8D8F1B10, "s_m_y_swat_01" },
	{ 0xCA0050E9, "s_m_y_uscg_01" },
	{ 0x3B96F23E, "s_m_y_valet_01" },
	{ 0xAD4C724C, "s_m_y_waiter_01" },
	{ 0x550D8D9D, "s_m_y_winclean_01" },
	{ 0x441405EC, "s_m_y_xmech_01" },
	{ 0xBE20FA04, "s_m_y_xmech_02" },
	{ 0x2E140314, "u_f_m_corpse_01" },
	{ 0x414FA27B, "u_f_m_miranda" },
	{ 0xA20899E7, "u_f_m_promourn_01" },
	{ 0x35578634, "u_f_o_moviestar" },
	{ 0xC512DD23, "u_f_o_prolhost_01" },
	{ 0xFA389D4F, "u_f_y_bikerchic" },
	{ 0xB6AA85CE, "u_f_y_comjane" },
	{ 0x9C70109D, "u_f_y_corpse_01" },
	{ 0xD9C72F8, "u_f_y_corpse_02" },
	{ 0x969B6DFE, "u_f_y_hotposh_01" },
	{ 0xF0D4BE2E, "u_f_y_jewelass_01" },
	{ 0x5DCA2528, "u_f_y_mistress" },
	{ 0x23E9A09E, "u_f_y_poppymich" },
	{ 0xD2E3A284, "u_f_y_princess" },
	{ 0x5B81D86C, "u_f_y_spyactress" },
	{ 0xF0EC56E2, "u_m_m_aldinapoli" },
	{ 0xC306D6F5, "u_m_m_bankman" },
	{ 0x76474545, "u_m_m_bikehire_01" },
	{ 0x342333D3, "u_m_m_fibarchitect" },
	{ 0x2B6E1BB6, "u_m_m_filmdirector" },
	{ 0x45BB1666, "u_m_m_glenstank_01" },
	{ 0xC454BCBB, "u_m_m_griff_01" },
	{ 0xCE2CB751, "u_m_m_jesus_01" },
	{ 0xACCCBDB6, "u_m_m_jewelsec_01" },
	{ 0xE6CC3CDC, "u_m_m_jewelthief" },
	{ 0x1C95CB0B, "u_m_m_markfost" },
	{ 0x81F74DE7, "u_m_m_partytarget" },
	{ 0x709220C7, "u_m_m_prolsec_01" },
	{ 0xCE96030B, "u_m_m_promourn_01" },	
	{ 0x60D5D6DA, "u_m_m_rivalpap" },
	{ 0xAC0EA5D8, "u_m_m_spyactor" },
	{ 0x90769A8F, "u_m_m_willyfist" },
	{ 0x46E39E63, "u_m_o_finguru_01" },
	{ 0x9A1E5E52, "u_m_o_taphillbilly" },
	{ 0x6A8F1F9B, "u_m_o_tramp_01" },
	{ 0xF0AC2626, "u_m_y_abner" },
	{ 0xCF623A2C, "u_m_y_antonb" },
	{ 0xDA116E7E, "u_m_y_babyd" },
	{ 0x5244247D, "u_m_y_baygor" },
	{ 0x8B7D3766, "u_m_y_burgerdrug_01" },
	{ 0x24604B2B, "u_m_y_chip" },
	{ 0x2D0EFCEB, "u_m_y_cyclist_01" },
	{ 0x85B9C668, "u_m_y_fibmugger_01" },
	{ 0xC6B49A2F, "u_m_y_guido_01" },
	{ 0xB3229752, "u_m_y_gunvend_01" },
	{ 0xF041880B, "u_m_y_hippie_01" },
	{ 0x348065F5, "u_m_y_imporage" },
	{ 0x7DC3908F, "u_m_y_justin" },
	{ 0xC8BB1E52, "u_m_y_mani" },
	{ 0x4705974A, "u_m_y_militarybum" },
	{ 0x5048B328, "u_m_y_paparazzi" },
	{ 0x36E70600, "u_m_y_party_01" },
	{ 0xDC59940D, "u_m_y_pogo_01" },
	{ 0x7B9B4BC0, "u_m_y_prisoner_01" },
	{ 0xC4B715D2, "ig_benny" },
	{ 0x841BA933, "ig_g" },
	{ 0xF9FD068C, "ig_vagspeak" },
	{ 0xC4A617BD, "mp_m_g_vagfun_01" },
	{ 0xC85F0A88, "mp_m_boatstaff_01" },
	{ 0x3293B9CE, "mp_f_boatstaff_01" }
};
#pragma endregion

inline void getVehicleModelName(DWORD vehicleHash, std::string& str)
{
	auto it = vehiclehash_map.find(vehicleHash);
	if (it != vehiclehash_map.end())
		str = it->second;
	else 
		str = std::to_string(vehicleHash);
}

inline void getPedModelName(DWORD pedHash, std::string& str)
{
	auto it = pedhash_map.find(pedHash);
	if (it != pedhash_map.end())
		str = it->second;
	else
		str = std::to_string(pedHash);
}

inline void notifyAboveMap(char* message)
{
	UI::_SET_NOTIFICATION_TEXT_ENTRY("STRING");
	UI::_ADD_TEXT_COMPONENT_STRING(message);
	UI::_DRAW_NOTIFICATION(0, 0);
}

inline void showSubtitle(const char * msg, int duration = 5000)
{
	UI::_SET_TEXT_ENTRY_2("CELL_EMAIL_BCON");

	const unsigned int maxStringLength = 99;

	char subStr[maxStringLength];

	for (unsigned int i = 0; i < strlen(msg) + 1; i += maxStringLength)
	{
		memcpy_s(subStr, sizeof(subStr), &msg[i], min(maxStringLength - 1, strlen(msg) + 1 - i));

		subStr[maxStringLength - 1] = '\0';

		UI::_ADD_TEXT_COMPONENT_STRING(subStr);
	}

	UI::_DRAW_SUBTITLE_TIMED(duration, 1);
}
