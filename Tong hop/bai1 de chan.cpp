#include<iostream>
#include<string>
using namespace std;
void hoa();
void thuong();
void so();
void cach();
string s;

main(){
	cout<<"nhap phan can doc";
	cin>>s;
	hoa();
	thuong();
	so();
	cach();
	return 0;
}
void hoa(){
	int hoa=0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			hoa++;
		}
	}
	cout<<"chu hoa co: "<<hoa<<endl;
}
void thuong(){
	int thuong=0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			thuong++;
		}
	}
	cout<<"chu thuong co: "<<thuong<<endl;
}
void cach(){
	int cach = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= ' ' && s[i+1] <= ' ') {
			cach++;}	
	}
	cout<<"so dau cach"<<cach<<endl;
}
void so(){
	int so = 0, kitu = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9'){
			so++;
		}
		else if (s[i] >= 33 && s[i] <= 47){
			kitu++;
		}
	}
	cout << "con so co: " << so << endl;
	cout << "ki tu co: " << so << endl;	
}
