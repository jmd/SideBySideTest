// BarContext.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#include "SharedDll.h"

#pragma comment(linker, "/manifestDependency:\"name='Bar' processorArchitecture='*' version='1.0.0.0' type='win32' \"")

extern "C" __declspec(dllexport) void BarSetValue(int v)
{
    SetValue(v);
}

extern "C" __declspec(dllexport) int BarGetValue()
{
    return GetValue();
}