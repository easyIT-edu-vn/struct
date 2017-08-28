// region - IMPROT
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
// endregion
using namespace std;
// region - IMPORT HEADERS
#include "Model.h"
#include "View.h"

// endregion

// region - Declaration prototype function
void Run_Program();
// endregion

// region - MAIN
int main()
{
	cout << "\n======== EasyIT.edu.vn =========\n";
	Run_Program();
	system("pause");
	return 0;
	_getch();
}
// endregion

// region - FUNTION
void Run_Program(){
	int Menu, Menu_Number = 2, List_Length;
	cout << "\n Nhap vao so luong hoc sinh: ";
	cin >> List_Length;
	Student List_Student[MAX];
	do{
		system("cls");
		Menu = SelectMenu(Menu_Number);
		Handle_Menu(List_Student, List_Length, Menu);
	} while (Menu > 0);
	_getch();
}
// endregion
