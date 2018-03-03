#pragma once

#ifdef SHAREDDLL_EXPORTS
#define DLL_EXPORT _declspec(dllexport)
#else
#define DLL_EXPORT _declspec(dllimport)
#endif

DLL_EXPORT void SetValue(int v);

DLL_EXPORT int GetValue();
