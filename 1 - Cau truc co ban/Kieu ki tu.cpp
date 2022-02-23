#include <iostream>
#include <string>
using namespace std;
int main(){
	string ten, ho, hoten;
	
	int n;
	cout << "Ban muon nhap toi da bao nhieu ki tu: ";
	cin >> n;
	cin.ignore();
	cout << "Nhap ten: ";
	getline(cin,ten);
	cout << "Ban vua nhap: " << ten;

	cout << "\nDay ki tu ban vua nhap co: "<< ten.length() <<" ki tu";
	if(n > ten.length()){
		cout << "\nBan con "<< n-ten.length()<<" ki tu de nhap nua";
	}
	else{
		cout << "\nBan da het ki tu de nhap";
	}
	cout << "\nKi tu thu 5 trong day ban nhap la: "<< ten[4];
	cout << "\nNhap xau thu 2: ";
	
	getline(cin,ho);
	hoten=ho+' '+ten;
	cout << "Ho va ten la: "<<hoten;
//cout.clear();
//string a= "cai quai gi";
//string b= "khong hieu";
//string c= a +' '+b;
//cout<<c;
	return 0;
	
}
