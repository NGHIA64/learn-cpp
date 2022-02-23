//Chuyen ki tu vua nhap thanh ki tu viet hoa
#include <iostream>
#include <string>
using namespace std;
int main(){
	string chuoi;
	cout << "Nhap ki tu chuyen doi: ";
	getline(cin, chuoi);
	for(int i = 0; i < chuoi.size(); i++){
		if(chuoi[i]>='a' && chuoi[i]<='z'){
			chuoi[i]-=32;
		}
	}
	cout << "Chu viet hoa: "<<chuoi;
	cout << "\nHam size hien thi: "<< chuoi.size();
	cout << "\nHam length hien thi: "<< chuoi.length();
	return 0;
}
