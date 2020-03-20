#include"Stdafx.h"

void Bubblesort(int* Pointer, unsigned Number)
{
	int temp;
	for (size_t i = 0; i < Number; i++)
	{
		for (size_t q = 0; q < Number - 1 - i; q++)
		{
			if (Pointer[q] < Pointer[q+1])
			{
				temp = Pointer[q];
				Pointer[q] = Pointer[q + 1];
				Pointer[q + 1] = temp;
			}
		}
	}
}