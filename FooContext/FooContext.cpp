// FooContext.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#include "SharedDll.h"

#pragma comment(linker, "/manifestDependency:\"name='Foo' processorArchitecture='*' version='1.0.0.0' type='win32' \"")

extern "C" __declspec(dllexport) void FooSetValue(int v)
{
    SetValue(v);
}

extern "C" __declspec(dllexport) int FooGetValue()
{
    return GetValue();
}