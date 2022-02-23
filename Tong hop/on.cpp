//onlai
#include <iostream>
#include <math.h>
using namespace std;
class sophuc{
	double a,b;
	public:
	sophuc(){
		a=0;
		b=0;
	}
	sophuc(double,double);
	friend istream&operator>>(istream &is,sophuc &x);
	friend ostream&operator<<(ostream &os, sophuc &x);
	sophuc operator+(sophuc);
};
sophuc::sophuc(double x,double y){
	x=a;
	y=b;
}
sophuc sophuc::operator+(sophuc x){
	sophuc tmp;
	tmp.a=a+x.a;
	tmp.b=b+x.b;
	return tmp;
}
istream&operator>>(istream &is,sophuc &x){
	cout<<"Nhap a: ";
	is>>x.a;
	cout<<"Nhap b: ";
	is>>x.b;
	return is;
}
ostream&operator<<(ostream &os, sophuc &x){
	os<<x.a<<" + "<<x.b<<"*i";
	cout<<endl;
	return os;
}
main(){
	sophuc A,B,C;
	cin>>A;
	cin>>B;
	C=A+B;
	cout<<C;
	return 0;
}
