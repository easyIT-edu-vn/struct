#define MAX 100
// region - STRUCT
struct Student{
	char Id[10];
	char Name[15];
	int Age;
	char Class[10];
	char Add[15];
	char Phone[11];
};
// endregion

 // region - Declaration prototype function
void Input_One_Student(Student &k);
void Input_List(Student List_Student[], int List_Length);
void Output_One_Student(Student &k);
void Output_List_Student(Student List_Student[], int List_Length);
void Output_Title();
void Output_Horizontal();
Student Find_Student(Student List_Student[], int Length_List, char Name[15]);
// endregion

// region - INPUT
void Input_One_Student(Student &k){
	cout << "\n Nhap vao id: ";
	_flushall();
	gets_s(k.Id, 10);
	cout << "\n Nhap vao ho ten hoc sinh: ";
	_flushall();
	gets_s(k.Name, 15);
	cout << "\n Nhap vao tuoi: ";
	_flushall();
	cin >> k.Age;
	cout << "\n Nhap vao lop hoc: ";
	_flushall();
	gets_s(k.Class, 10);
	cout << "\n Nhap vao dia chi: ";
	_flushall();
	gets_s(k.Add, 10);
	cout << "\n Nhap vao so dien thoai: ";
	_flushall();
	gets_s(k.Phone, 11);
}

void Input_List(Student List_Student[], int List_Length){
	for (int i = 0; i < List_Length; i++){
		Input_One_Student(List_Student[i]);
	}
}
// endregion

// region - OUTPUT

void Output_One_Student(Student &k){
	cout << setiosflags(ios::left)
		<< ":"
		<< setw(10) << k.Id
		<< ":"
		<< setw(15) << k.Name
		<< ":"
		<< setw(10) << k.Age
		<< ":"
		<< setw(10) << k.Class
		<< ":"
		<< setw(15) << k.Add
		<< ":"
		<< setw(11) << k.Phone;
	
}
void Output_List_Student(Student List_Student[], int List_Length){
	Output_Title();
	for (int i = 0; i <List_Length; i++){
		cout << "\n";
		Output_One_Student(List_Student[i]);
	}
	cout << "\n";
	Output_Horizontal();
}
// endregion

//region - TITLE
void Output_Title(){
	Output_Horizontal();
	cout << "\n";

	cout << setiosflags(ios::left)
		<< ":"
		<< setw(10) << "MA SO"
		<< ":"
		<< setw(15) << "HO TEN"
		<< ":"
		<< setw(10) << "TUOI"
		<< ":"
		<< setw(10) << "LOP"
		<< ":"
		<< setw(15) << "DIA CHI"
		<< ":"
		<< setw(11) << "SO DIEN THOAI";
	Output_Horizontal();
	cout << "\n";
}

void Output_Horizontal(){
	cout << "\n";
	for (int i = 0; i < 80; i++){
		cout << "=";
	}
}

// endregion

// region - FIND STUDENT

Student Find_Student(Student List_Student[], int Length_List, char Name[15]){
	for (int i = 0; i < Length_List; i++){
		if (strcmp(Name, List_Student[i].Name) == 0){
			return List_Student[i];
		}
	}

}
// endregion