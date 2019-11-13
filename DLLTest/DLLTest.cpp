// DLLTest.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "pch.h"
#include <iostream>

#include "DLLTest.h"

int main()
{
    std::cout << "Hello World!\n"; 
}

int __stdcall Add(int a, int b)
{
	return a + b;
}

void __stdcall ShowString(char * string)
{
	printf(string);
}

float __stdcall Add_with_float(float a, float b)
{
	printf("a = %f, b = %f, a+b = %f\n", a, b, a+b);
	return a + b;
}

int __stdcall SetArray(float *data, int ndata)
{
	int i;
	for (i = 0; i < ndata; i++)
	{
		printf("arr[%d] = %f\n", i, data[i]);
	}
	return 0;
}