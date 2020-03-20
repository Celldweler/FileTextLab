#include"Stdafx.h"


int ContentsFile(char* String, const char* Mode)
{
	unsigned Number = 0, Term;
	FILE* FilePointer = fopen(String, Mode);

	if (FilePointer == NULL)return Number;
	while (!feof(FilePointer))
	{
		fscanf(FilePointer, "%d\n", &Term);
		std::cout << Term<<" ";
		Number++;
	}
	fclose(FilePointer);
	return Number;
}