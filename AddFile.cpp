#include"Stdafx.h"

void AddFile(char* String, const char* Mode, 
	                  int* Pointer, unsigned Number)
{
	FILE* FilePointer = fopen(String, Mode);
	if (FilePointer == nullptr)
	{
		std::cout << "Can't open file to addition!";
		exit(-1);
	}

	for (size_t i = 0; i < Number; i++)
	{
		fprintf(FilePointer, "%d ", Pointer[i]);
	}
	fclose(FilePointer);
}
