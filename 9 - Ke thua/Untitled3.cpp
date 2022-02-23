#include <iostream>
#include <string>
#define SIZE 20
using namespace std;

// lop cha
class Person {
private:
	string ten;
	int tuoi;
public:
	Person();
	Person(string ten, int tuoi);
	~Person() {

	}

	void setTen(string ten) {
		this->ten = ten;
	}
	string getTen() {
		return this->ten;
	}
	void nhapDL();
	virtual bool kiemTra() = 0;
};

Person::Person() {
	ten = " ";
	tuoi = 1;
}

Person::Person(string ten, int tuoi) {
	this->ten = ten;
	this->tuoi = tuoi;
}

void Person::nhapDL() {
	cout << "\nNhap ten: ";
	getline(cin, this->ten);
	cout << "Nhap tuoi: ";
	cin >> this->tuoi;
}

// lop Student
class Student :public Person {
private:
	float diemTB;
public:
	Student();
	Student(string ten, int tuoi, float diemTB);
	void nhapDL();
	bool kiemTra();
};

// trien khai ham cua lop Student
Student::Student():Person() {
	diemTB = 0;
}

Student::Student(string ten, int tuoi, float diemTB) : Person(ten, tuoi) {
	this->diemTB = diemTB;
}

void Student::nhapDL() {
	Person::nhapDL();
	cout << "Nhap diem trung binh: ";
	cin >> this->diemTB;
	cin.ignore();
}

bool Student::kiemTra() {
	return diemTB > 9.5;
}

// Lop Professor
class Professor:public Person{
private:
	int soLuong;
public:
	Professor();
	Professor(string ten, int tuoi, int soLuong);
	void nhapDL();
	bool kiemTra();
};

Professor::Professor():Person() {
	soLuong = 0;
}

Professor::Professor(string ten, int tuoi, int soLuong) : Person(ten, tuoi) {
	this->soLuong = soLuong;
}

void Professor::nhapDL() {
	Person::nhapDL();
	cout << "Nhap so luong bai bao: ";
	cin >> this->soLuong;
	cin.ignore();
}

bool Professor::kiemTra() {
	return soLuong >= 100;
	/*if (p.soLuong >= 100) {
		return true;
	}
	else {
		return false;
	}*/
}

int main() {
	Student student[SIZE];
	int n;
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "\nNhap thong tin sinh vien thu " << i + 1;
		student[i].nhapDL();
	}

	Student temp;
	cout << "\nTen nhung sinh vien kiet xuat\n";
	//int dem = 0;
	bool flag = false;
	for (int i = 0; i < n; i++) {
		if (student[i].kiemTra() == true) {
			cout << student[i].getTen();
			//dem++;
			flag = true;
		}
	}

	if (flag == false) {
		cout << "\nKhong co sinh vien nao kiet xuat!";
	}

	//xu li Professor
	Professor professor[SIZE];
	int m;
	cout << "\nNhap so luong giao su: ";
	cin >> m;
	cin.ignore();
	for (int i = 0; i < m; i++) {
		cout << "\nThong tin giao su thu: " << i + 1;
		professor[i].nhapDL();
	}

	Professor tempPro;
	bool flagPro = false;
	cout << "\nTen nhung giao su gioi\n";
	for (int i = 0; i < m; i++) {
		if (professor[i].kiemTra() == true) {
			cout << professor[i].getTen();
			flagPro = true;
		}
	}
	if (flagPro == false) {
		cout << "\nKhong co nao gioi!";
	}
	return 0;
}
