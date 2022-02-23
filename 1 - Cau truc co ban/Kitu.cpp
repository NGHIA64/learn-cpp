//kiem tra xau nhap vao co trong xau da nhap khong. Co thi vi tri xuat hien la vi tri nào?
#include <iostream>
#include <string>
using namespace std;
int main(){
	string chuoi, kitu;
	cout << "Nhap 1 chuoi: ";
	getline(cin, chuoi);
	
	cout << "Nhap ki tu muon kiem tra: ";
	
	getline(cin, kitu);
	int timkiem;
	timkiem = chuoi.find(kitu);
	if(timkiem==-1){
		cout << "Ki tu "<<kitu<<" khong xuat hien trong "<<chuoi;
	}
	else{
		cout << "Ki tu "<<kitu<<" co xuat hien trong "<<chuoi;
		cout << "\nVi tri xuat hien cua "<<kitu<<" trong "<<chuoi<<" la: "<<timkiem;
		int dem;
		for(int i = 0; i < chuoi.length(); i++){
			if(chuoi[i]=='a'){
				dem++;
			}
		}
		cout << "\nKi tu a xuat hien "<<dem<<" lan trong "<<chuoi;
		
		
	}
	return 0;
}
