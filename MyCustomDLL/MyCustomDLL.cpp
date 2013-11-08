// MyCustomDLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "MyCustomDLL.h"

extern "C" MYCUSTOMDLL_API int AddNumbers(int x, int y)
{
	return x + y;
}

extern "C" MYCUSTOMDLL_API int AddArray(int x[], int size)
{
	int	ans = 0;

	for (int ii=0; ii<size; ii++)
	{
		ans += x[ ii ];
	}

	return ans;
}

extern "C" MYCUSTOMDLL_API void DisplayBetterCar(CAR2 * theCar)
{
	MessageBox(NULL, theCar->theCar.color, TEXT("Car color"), MB_OK);
	MessageBox(NULL, theCar->theCar.make, TEXT("Car Make"), MB_OK);
	MessageBox(NULL, theCar->petName, TEXT("Pet Name"), MB_OK);
}
