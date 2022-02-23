//Kiem tra so chinh phuong
#include <iostream>
#include <math.h>
using namespace std;
void nhapdl(int &n){
	cout<<"Nhap N: ";
	cin>>n;
}
void ktra(int &n){
	int i = sqrt(n);
	if(i*i==n){
		cout<<n<<" la so chinh phuong";
	}
	else{
		cout<<n<<" khong phai la so chinh phuong";
	}
	

	
}
int main(){
	int a;
	nhapdl(a);
	ktra(a);
	return 0;
}
