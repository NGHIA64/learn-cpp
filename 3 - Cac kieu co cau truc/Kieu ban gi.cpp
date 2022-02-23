#include <iostream>
using namespace std;
struct hs{
	string hoten;
	string diachi;
	int tuoi;
	
};
int main(){
	int n;
	hs sv[100];
	cout <<"Nhap so luong sinh vien: ";
	cin >> n;
	for(int i =0; i< n;i++){
		cout<<"Sinh vien thu "<<i+1<<": ";
		cin.ignore();
		cout<<"\nHo ten: ";
		getline(cin,sv[i].hoten);
		cout<<"Dia chi: ";
		getline(cin,sv[i].diachi);
		cout<<"Tuoi: ";
		cin>>sv[i].tuoi;
	}
	for(int i =0; i< n;i++){
		cout<<"\nSinh vien thu "<<i+1<<": ";
		cout<<"\nHo ten: ";
		cout<<sv[i].hoten;
		cout<<"\nDia chi: ";
		cout<<sv[i].diachi;
		cout<<"\nTuoi: ";
		cout<<sv[i].tuoi;
	}
	return 0;
}
