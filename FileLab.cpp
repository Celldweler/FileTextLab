#include"Stdafx.h"

using namespace std;


int main(int argc,char* argv[])
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "");
	char FileName[50];
	int* Massive = nullptr;
	unsigned Number;
	printf("\nEnter the name of file]$~ ");
	cin.getline(FileName, 100);

	system("cls");
	printf("\n The contents of the File <<%s>> :\n", FileName);

	Number = ContentsFile(FileName, "r");
	cout << Number;
	//exit(8);
	if (Number == 0)
	{
		system("cls");
		printf("\tFile <<%s>> is empty!\n", FileName);
		printf("\n\t Press any key to exit...");
		return 0;
	}
	Massive = InitMassive(FileName, "r", Number);
	if (Massive == nullptr)
	{
		system("cls");
		cout << "\tDinamic array don't exist!\n";
		cout << "\n\t Press any key to exit..."; getch();
		return 0;
	}
	Bubblesort(Massive, Number);
	AddFile(FileName, "a", Massive, Number);
	free(Massive);

	cout << "\n New contents of the File <<" << FileName << ">> :\n";
	Number = ContentsFile(FileName, "r");
}






