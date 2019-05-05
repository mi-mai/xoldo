///////////////////////////////////////////////////////////////////////////////
//rulez.h
//(c) Zhe@Soldo Clan -> zhe[@]soldo.in
////////////////////////////////////////////////////////////////////////////
//LEGACY_CODEBASE - code inherited from XDN
//SOLDO_CODEBASE - code used in SLD apps
//GOLDO_CODEBASE - code used in GOLDO apps
//XOLDO_CODEBASE - code used in XOLDO apps
//PASSATELLI - code will be used in next coins, so Soldo hacks will be placed inside #ifndef PASSATELLI / #endif

#ifndef XOLDO_CODEBASE
	#define XOLDO_CODEBASE
	
	#define CRYPTONOTE_ASSET_TICKER "xoldo"
	#define CRYPTONOTE_ASSET_NAME   "Xoldo"
	#define CRYPTONOTE_ASSET_APP    "xoldo"	

	#define CRYPTONOTE_ASSET_DAEMON 				"xoldod";
	#define CRYPTONOTE_ASSET_WALLET 				"xoldow";
	#define CRYPTONOTE_ASSET_WALLET_HD 				"hdwallet";
	#define CRYPTONOTE_ASSET_WALLET_ADDRESS_PREFIX 	"g";
	#define CRYPTONOTE_ASSET_LINK_COMMUNITY 		"https://discord.gg/46xpPye";
	
	#define GITHUB_URL								"https://github.com/monselice/xoldo.git"
	#define ADDRESS_BASE58_PREFIX 					238
	
#endif

#ifndef LEGACY_CODEBASE
	#define LEGACY_CODEBASE
#endif

///////////////////////////////////////////////////////////////////////////////
