// FooContext.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#include "SharedDll.h"

extern "C" __declspec(dllexport) void FooSetValue(int v)
{
    SetValue(v);
}

extern "C" __declspec(dllexport) int FooGetValue()
{
    return GetValue();
}