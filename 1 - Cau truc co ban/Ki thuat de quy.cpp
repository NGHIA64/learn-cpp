//Chuong trinh thuc hien cac yeu cau sau:
//	- Nhap vao so nguyen N 
//	- Tinh va in ra gia tri cua N giai thua (N!) su dung ki thuat de quy

#include <iostream>
using namespace std;
void nhapdl(int &a){
	cout<<"Nhap N: ";
	cin>>a;
}
int factorial(int n){
	if(n==1) return 1;
	else return n * factorial(n-1);
}
int main(){
	int N;
	nhapdl(N);
	cout<<"N!= "<<factorial(N)<<endl;
	return 0;
}
