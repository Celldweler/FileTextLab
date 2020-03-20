#pragma once
#include <iostream>
#include <Windows.h>
///
#include <conio.h>
#include <stdio.h>
#include <process.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
#include <sys\stat.h>
#pragma warning(disable : 4996)

int ContentsFile(char* String, const char* Mode);//возвращ€ет число элементов наход€щигс€ в файле String в режиме Mode
int* InitMassive(char* String, const char* Mode, unsigned Number);
void Bubblesort(int* Pointer, unsigned Number);
void AddFile(char* String, const char* Mode, int* Pointer, unsigned Number);
