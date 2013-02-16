#ifndef __VARS_H__
#define __VARS_H__

#include "D2Warden.h"

extern int WardenUpTime;
extern hWarden_Struct hWarden;
extern HANDLE DumpHandle;
extern HANDLE hEvent;

extern CRITICAL_SECTION MEM_CRITSECT;
extern CRITICAL_SECTION LOG_CS;
extern BYTE Max_Players;
extern int ExpRange;
extern int DmgRekord;
extern std::string DmgOwner;

extern BYTE MoveToTown;
extern BYTE DropEarGold;
extern BYTE StrBugFix;
extern BYTE FFAMode;
extern BYTE AllowVanilla;
extern BYTE AllowGU;
extern BYTE AllowNLWW;
extern BYTE AllowHB;
extern BYTE AllowTourMode;
extern BYTE EnableSeed;
extern BYTE AllowD2Ex;
extern BYTE DetectTrick;
extern std::string ClansURL;
extern std::string ConfigFile;
extern std::string UpdateURL;
extern std::string GSName;
extern std::map<std::string,BYTE> ColorSet;

extern bool Warden_Enable;
extern Vote * sVote;
extern DWORD MOD_Length;
extern BYTE TeleChars[7];
extern int DumpInterval;
extern unsigned StatID;
extern BYTE DesyncFix;
extern unsigned int AfkDrop;
extern int PNo;

//-----------
extern int SellCount;
extern BYTE EnableWE;
extern int NextDC;
extern int MinSell;
extern int MaxSell;
extern int InfoDelay;
extern WEITem WItem;

//----------------
extern unsigned char *MOD_Enrypted;
extern unsigned char AE_Packet00[40];

extern UnitAny* ptMonster;
extern UnitAny* glptItem;

#endif