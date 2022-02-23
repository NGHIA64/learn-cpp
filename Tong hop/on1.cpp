#include <iostream>
#include <math.h>
using namespace std;
//khai bao lop
class sophuc{
	double a,b;
	public:
		sophuc(){
		
		a=0;
		b=0;}
		sophuc(double,double);
		sophuc operator+(sophuc x);
		friend istream&operator>>(istream &is, sophuc &x);
		friend ostream&operator<<(ostream &os, sophuc &x);
};
//trien khai ham thanh phan
sophuc::sophuc(double a,double b){
	this->a =a;
	this->b = b;
}
sophuc sophuc::operator+(sophuc x){
	sophuc tmp;
	tmp.a=a+x.a;
	tmp.b=b+x.b;
	return tmp;
}
istream&operator>>(istream &is, sophuc &x){
	cout<<"Nhap a: ";
	is>>x.a;
	cout<<"Nhap b: ";
	is>>x.b;
	return is;
}
ostream&operator<<(ostream &os, sophuc &x){
	os<<x.a<<" + "<<x.b<<"*i";
	cout<<endl;
}
main(){
	sophuc A,B,C;
	cin>>A;
	cin>>B;
	C=A+B;
	cout<<C;
	return 0;
}
