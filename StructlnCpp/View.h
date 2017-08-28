// region - Declaration prototype function
void OutputMenu();
int SelectMenu(int Menu_Number);
void Handle_Menu(Student List_Student[MAX], int &List_Length, int Menu);

//endregion 

// region - MENUs
void OutputMenu(){
	cout << "\n ========= CHON CHUC NANG =======";
	cout << "\n 0. Thoat khoi chuong trinh";
	cout << "\n 1. Nhap vao danh sach hoc sinh";
	cout << "\n 2. Xuat danh sach hoc sinh";
	cout << "\n 3. Tim thong tin hoc sinh theo ten";
	cout << "\n ================================";
}

//endregion

//region - SELECT MENU
int SelectMenu(int Menu_Number)
{
	int Num;
	do{
		system("cls");
		OutputMenu();
		cout << "\n Nhap vao chuc nang tuong ung so thu tu: ";
		cin >> Num;
	} while (0 >= Num && Num >= Menu_Number);
	return Num;

}

//endregion

// region HANDLE MENU

void Handle_Menu(Student List_Student[MAX],int &List_Length, int Menu){
	char NameFind[15];
	Student k;
	switch (Menu)
	{
	case 0:
		system("cls");
		cout << "\n 0. Thoat khoi chuong trinh";
		break;
	case 1:
		system("cls");
		cout << "\n 1. Nhap vao danh sach hoc sinh";
		Input_List(List_Student, List_Length);
		break;
	case 2:
		system("cls");
		cout << "\n 2. Xuat danh sach hoc sinh";
		Output_List_Student(List_Student, List_Length);
		break;
	case 3:
		system("cls");
		cout << "\n 3. Tim thong tin hoc sinh theo ten";
		cout << "\n Nhap vao ho ten can tim kiem: ";
		_flushall();
		gets_s(NameFind, 15);

		Output_Title();
		Output_One_Student(Find_Student(List_Student, List_Length, NameFind));
		Output_Horizontal();
		break;

	}
	_getch();
}
//endregion