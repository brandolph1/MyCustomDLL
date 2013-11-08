
#pragma once

#ifdef MYCUSTOMDLL_EXPORTS
#define MYCUSTOMDLL_API __declspec(dllexport)
#else
#define MYCUSTOMDLL_API __declspec(dllimport)
#endif

extern "C" MYCUSTOMDLL_API int AddNumbers(int x, int y);
extern "C" MYCUSTOMDLL_API int AddArray(int x[], int size);

extern "C"
typedef struct _CAR
{
	LPCWSTR make;
	LPCWSTR color;
} CAR;

extern "C"
typedef struct _CAR2
{
	CAR theCar;
	LPCWSTR petName;
} CAR2;

extern "C" MYCUSTOMDLL_API void DisplayBettercar(CAR2 * theCar);
