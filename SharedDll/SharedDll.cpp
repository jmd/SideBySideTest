// SharedDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

static int value;

__declspec(dllexport) void SetValue(int v)
{
    value = v;
}

__declspec(dllexport) int GetValue()
{
    return value;
}

