#include"Stdafx.h"

int* InitMassive(char* String, const char* Mode,
	unsigned Number)
{
	unsigned i;
	int* Pointer = (int*)malloc(Number * sizeof(int));
	FILE* FilePointer = fopen(String, Mode);

	if (FilePointer == nullptr)
		return nullptr;
	for (size_t i = 0; i < Number; i++)
	{
		fscanf(FilePointer, "%d\n", &Pointer[i]);
	}
	fclose(FilePointer);
	return Pointer;
}

