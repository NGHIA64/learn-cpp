#include <iostream>
#include <math.h>
using namespace std;

class sophuc{
	
	public:
		double a,b;
	sophuc(){
		a=0;
		b=0;
	}
	sophuc(double, double);
	sophuc operator+(sophuc);
	friend istream&operator>>(istream &is, sophuc &x);
	friend ostream&operator<<(ostream &os, sophuc &x);
};

sophuc::sophuc(double a, double b){
	this->a=a;
	this->b=b;
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
sophuc sophuc::operator+(sophuc x){
	sophuc tmp;
	tmp.a=a+x.a;
	tmp.b=b+x.b;
	return tmp;
}

main(){
	sophuc A,B,C;
	cin>>A;
	cin>>B;
	C=A+B;
	cout<<C;
	return 0;
}
