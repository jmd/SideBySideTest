// SideBySideTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <windows.h>
#include <iostream>


typedef int(*TGetValue)();
typedef void(*TSetValue)(int);

int main()
{
    HMODULE hFoo = LoadLibrary(L"FooContext.dll");
    auto fooGetValue = (TGetValue)GetProcAddress(hFoo, "FooGetValue");
    auto fooSetValue = (TSetValue)GetProcAddress(hFoo, "FooSetValue");
    HMODULE hBar = LoadLibrary(L"BarContext.dll");
    auto barGetValue = (TGetValue)GetProcAddress(hBar, "BarGetValue");
    auto barSetValue = (TSetValue)GetProcAddress(hBar, "BarSetValue");

    fooSetValue(1);
    barSetValue(2);
    std::cout << "FooGetValue (expected value 1): " << fooGetValue() << "\n";
    std::cout << "BarGetValue (expected value 2): " << barGetValue() << "\n";
    return 0;
}

