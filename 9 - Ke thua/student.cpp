#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class nhanvien{
	private:
		string hoten,ns,quequan;
		int luong;
	public:
			nhanvien(){
				hoten=" ";
				ns=" ";
				quequan=" ";
				luong=0;
			}
			nhanvien(string hoten, string ns, string quequan, int luong){
				this-> hoten=hoten;
				this-> ns=ns;
				this -> quequan=quequan;
				this -> luong=luong;
			}
			
			void nhapdl();
			void hienthi();
//			void hienthiqueha(nhanvien nv[], int n);
			friend bool checkque(nhanvien nv);
			friend float trungbinhluong(nhanvien nv[],int n);
			friend int getnamsinh(nhanvien nv);
//			friend int chuyenstringraso(nhanvien nv);
};

bool checkque(nhanvien nv){
	//cach 1
	if(nv.quequan=="Ha Noi"){
		return true;
	}
	else{
		return false;
	}
	//cach 2
	//return nv.quequan=="Ha Noi";
}
void nhanvien::hienthi(){
	cout<<"\nHo ten: "<<this->hoten;
	cout<<"\nNam sinh: "<<this->ns;
	cout<<"\nQue quan: "<<this->quequan;
}
//void nhanvien::hienthiqueha(nhanvien nv[], int n){
//	for(int i=0;i<n;i++){
//		if(nv[i].quequan()=="Ha Noi"){
//			nv[i].hienthi();
//		}
//	}
//}
void nhanvien::nhapdl(){
	cout<<"\nNhap ho ten: ";
	getline(cin, this->hoten);
	cout<<"Nhap nam sinh: ";
	getline(cin, this->ns);
	cout<<"Nhap que quan: ";
	getline(cin, this->quequan);
	cout<<"Nhap luong: ";
	cin>> this->luong;
	cin.ignore();
}
//Tinh va dua ra trung binh cong luong cua cac nhan vien
float trungbinhluong(nhanvien nv[],int n){
	int tongluong=0;
	float tbluong;
	for(int i=0;i<n;i++){
		tongluong+=nv[i].luong;
		
	}
	tbluong= tongluong/n;
	return tbluong;
	
}
int getnamsinh(nhanvien nv){
	string namsinh = nv.ns.substr(6, 4);
	
	int nus =atoi(namsinh.c_str());
	return nus;
}
//int chuyenstringraso(nhanvien nv){
//	int namsinh=atoi()
//}
int main(){
	nhanvien nv[100];
	int n;
	cout << "Nhap so luong sinh vien: ";
	cin >>n;
	cin.ignore();
	for(int i=0; i<n;i++){
		cout<<"Nhap thong tin nhan vien thu "<<i+1;
		nv[i].nhapdl();
		
	}
	//cach 1
	nhanvien temp;
//	temp.hienthiqueha(nv,n);
	//cach 2
	for(int i=0;i<n;i++){
		if(checkque(nv[i])==true){
			nv[i].hienthi();
		}
	}
	cout<<"\nLuong trung binh la: "<< trungbinhluong(nv,n);
	int dem=0;
	for(int i=0; i<n; i++){
		if(2020-getnamsinh(nv[i])>30){
			dem++;
		}
	}
	cout<<"\nCo "<<dem<<" nhan vien co tuoi lon hon 30";
	return 0;
}

