#pragma once
#include <iostream>
#include <Windows.h>
#include <tlhelp32.h>
#include <Psapi.h>
#include <Memoryapi.h>



HANDLE MEMORY = OpenProcess(PROCESS_ALL_ACCESS, 0, GetCurrentProcessId());
DWORD cshelldll;
DWORD wolfteambin;
BOOL PointModule = FALSE;


bool NameEsp = false;

bool AllPlayerInfo = false;

bool MovementSpeed = false; float Move_Speed = 0.50;

bool JumpChanger = false; int Jump_Changer = 0 ;

bool InfınıteAmmo = false;

bool NoRecoil = false;
bool NoSpread = false;

bool NoReload = false;

bool RepidFire = false;

bool AlwaysHeadShot = false;

bool TeamKill = false;

bool GodMode = false;

bool AımbotUltura = false;

bool FreezePlayer = false;

bool RespawmWhereDie = false;

bool NoFallDamage = false;

bool WallShot = false;

bool GodMode_ez = false;

bool Anti_Ah = false;

bool AllPlayerFreeze = false;

DWORD WINAPI memory_c(HMODULE hModule, LPDIRECT3DDEVICE9 pDevice)
{
    if (!PointModule)
    {
        cshelldll = (DWORD)GetModuleHandle("cshell.dll");
        wolfteambin = (DWORD)GetModuleHandle("Wolfteam.bin");
        PointModule = TRUE;
    }
    while (true)
    {
      

        if (MovementSpeed == true)
        {
            DWORD WallHacks = cshelldll + 0x11A102;
            DWORD WallValue = 2391618677; // on 21988623
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (MovementSpeed == false)
        {
            DWORD WallHacks = cshelldll + 0x11A102;
            DWORD WallValue = 2391618676; // of 21988367
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        // Jump Changer
        if(Jump_Changer == 0)
        { 
            DWORD WallHacks = cshelldll + 0x4B4D84;
            DWORD WallValue = 1065353216; // 
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (Jump_Changer == 1)
        {
            DWORD WallHacks = cshelldll + 0x4B4D84;
            DWORD WallValue = 1072064102; // 
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (Jump_Changer == 2)
        {
            DWORD WallHacks = cshelldll + 0x4B4D84;
            DWORD WallValue = 1075419546; //
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        // Name Esp
        if (NameEsp == true)
        {
            DWORD WallHacks = cshelldll + 0x38175D;
            DWORD WallValue = 2201498484; // on 21988623
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (NameEsp == false)
        {
            DWORD WallHacks = cshelldll + 0x38175D;
            DWORD WallValue = 2201498485; // of 21988367
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        // Inf Ammo
        if (InfınıteAmmo == true)
        {
            DWORD WallHacks = cshelldll + 0x586A9;
            DWORD WallValue = 4169338485; // on 21988623
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (InfınıteAmmo == false)
        {
            DWORD WallHacks = cshelldll + 0x586A9;
            DWORD WallValue = 4169338484; // of 21988367
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        // No Recoil
        if (NoRecoil == true)
        {
            DWORD WallHacks = cshelldll + 0x49E808;
            DWORD WallValue = 0; // on 21988623
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (NoRecoil == false)
        {
            DWORD WallHacks = cshelldll + 0x49E808;
            DWORD WallValue = 1078530011; // of 21988367
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        //NoSpread
        if (NoSpread == true)
        {
            DWORD WallHacks = cshelldll + 0x159323;
            DWORD WallValue = 1301090420; // on 21988623
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (NoSpread == false)
        {
            DWORD WallHacks = cshelldll + 0x159323;
            DWORD WallValue = 1301090421; // of 21988367
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        // NoReload
        if (RepidFire == true)
        {
            DWORD WallHacks = cshelldll + 0x13FF9B;
            DWORD WallValue = 1574503796; // on 21988623
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (RepidFire == false)
        {
            DWORD WallHacks = cshelldll + 0x13FF9B;
            DWORD WallValue = 1574503797; // of 21988367
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        // AlwaysHeadShot
        if (AlwaysHeadShot == true)
        {
            DWORD WallHacks = cshelldll + 0x1DCD85;
            DWORD WallValue = 1566441904; // on 21988623
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (AlwaysHeadShot == false)
        {
            DWORD WallHacks = cshelldll + 0x1DCD85;
            DWORD WallValue = 1566490674; // of 21988367
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        //TeamKill
        if (TeamKill == true)
        {
            DWORD WallHacks = cshelldll + 0x1C1335;
            DWORD WallValue = 4286937971; // on 21988623
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (TeamKill == false)
        {
            DWORD WallHacks = cshelldll + 0x1C1335;
            DWORD WallValue = 4286937972; // of 21988367
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        // RespawmWhereDie
        if (RespawmWhereDie == true)
        {
            DWORD WallHacks = cshelldll + 0x119A15;
            DWORD WallValue = 3897951861; // on 21988623
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (RespawmWhereDie == false)
        {
            DWORD WallHacks = cshelldll + 0x119A15;
            DWORD WallValue = 3897951860; // of 21988367
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        // NoFallDamage
        if (NoFallDamage == true)
        {
            DWORD WallHacks = cshelldll + 0x11DA93;
            DWORD WallValue = 2654543220; // on 21988623
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (NoFallDamage == false)
        {
            DWORD WallHacks = cshelldll + 0x11DA93;
            DWORD WallValue = 2654543221; // of 21988367
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        // WallShot 
        if (WallShot == true)
        {
            DWORD WallHacks = wolfteambin + 0x520A1;
            DWORD WallValue = 5; // on 21988623
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (WallShot == false)
        {
            DWORD WallHacks = wolfteambin + 0x520A1;
            DWORD WallValue = 1967244534; // of 21988367
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (GodMode_ez)
        {
            if (GodMode_ez == true)
            {
                DWORD WallHacks = cshelldll + 0x117849;
                DWORD WallValue = 3641198040; // on 21988623
                WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
            }
            if (GodMode_ez == true)
            {
                DWORD WallHacks = cshelldll + 0x258E8E;
                DWORD WallValue = 3641198040; // on 21988623
                WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
            }
            if (GodMode_ez == true)
            {
                DWORD WallHacks = cshelldll + 0x258EDD;
                DWORD WallValue = 3641198040; // on 21988623
                WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
            }
            if (GodMode_ez == true)
            {
                DWORD WallHacks = cshelldll + 0x258F0E;
                DWORD WallValue = 3641198040; // on 21988623
                WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
            }
            if (GodMode_ez == true)
            {
                DWORD WallHacks = cshelldll + 0x258F39;
                DWORD WallValue = 3641198040; // on 21988623
                WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
            }
        }
        // AllPlayerFreeze
        if (AllPlayerFreeze == true)
        {
            DWORD WallHacks = wolfteambin + 0xD054E;
            DWORD WallValue = 5; // on 21988623
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
        if (AllPlayerFreeze == false)
        {
            DWORD WallHacks = wolfteambin + 0xD054E;
            DWORD WallValue = 1574503797; // of 21988367
            WriteProcessMemory(MEMORY, (LPVOID)WallHacks, &WallValue, 4, NULL);
        }
    }
}