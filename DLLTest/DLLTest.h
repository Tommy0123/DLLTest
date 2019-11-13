#pragma once

#ifdef DLLTEST_EXPORTS
#define DLLTEST_API extern "C" __declspec(dllexport)
#else
#define DLLTEST_API extern "C" __declspec(dllimport)
#endif // DLLTEST_EXPORTS

DLLTEST_API int __stdcall Add(int, int);
DLLTEST_API void __stdcall ShowString(char*);
DLLTEST_API float __stdcall Add_with_float(float, float);
DLLTEST_API int __stdcall SetArray(float*, int);
