// BarContext.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#include "SharedDll.h"

extern "C" __declspec(dllexport) void BarSetValue(int v)
{
    SetValue(v);
}

extern "C" __declspec(dllexport) int BarGetValue()
{
    return GetValue();
}