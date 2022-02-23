#include <iostream>
#include <string>
#define k 100
using namespace std;
//Lop Employee
class Employee{
	private:
		
	public:
		string hoten;
		int luong;
		Employee();
		Employee(string hoten, int luong);
		~Employee(){
		};
		void sethoten(string hoten){
			this->hoten=hoten;
		}
		string gethoten(){
			return this->hoten;
		}
		void setluong(int luong){
			this->luong=luong;
		}
		int getluong(){
			return this->luong;
		}
		void nhapdl();
};
Employee::Employee(){
	hoten=" ";
	luong=0;
}
Employee::Employee(string hoten, int luong){
	this->hoten=hoten;
	this->luong=luong;
}
void Employee::nhapdl(){
	cout << "Nhap ho ten nhan vien: ";
	getline(cin, this->hoten);
	cin.ignore();
	cout << "Nhap luong nhan vien: ";
	cin >> this->luong;
}
//Lop Manager
class Manager:public Employee{
	private:
		int thuong;
		int thamnien;
	public:
	Manager();
	Manager(int thuong, int thamnien);
	void nhapdl();
	
};

Manager::Manager():Employee(){
	thuong=0;
	thamnien=0;
}
Manager::Manager(int thuong, int thamnien):Employee(hoten, luong){
	this->thuong=thuong;
	this->thamnien=thamnien;
	
}
void Manager::nhapdl(){
	Employee::nhapdl();
	cout<<"Nhap thuong nhan vien: ";
	cin>>this->thuong;
	cout<<"Nhap thamnien nhan vien: ";
	cin>>this->thamnien;
}


int main(){
	Manager a[k];
	int n;
	cout <<"Nhap so luong nhan vien: ";
	cin.ignore();
	for(int i =0; i<n; i++){
		cout<<"\nNhap nhan vien thu "<<i+1<<endl;
		a[i].nhapdl();
		cin.ignore();
	}
//	for(int i =0; i<n; i++){
//		cout<<a[i]<<endl;
//		
//	}
	
	return 0;
}
