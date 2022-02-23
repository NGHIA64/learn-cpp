#include <iostream>
using namespace std;
class sophuc{
	double a,b;
	public:
	sophuc(){
		a=0;
		b=0;
	};
	sophuc(double a, double b);
	sophuc operator+(sophuc x);
	friend istream&operator>>(istream &is, sophuc &x);
	friend ostream&operator<<(ostream &os, sophuc &x);
	
};
sophuc::sophuc(double a, double b){
	this-> a=a;
	this->b=b;
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
	cout << endl;
	return os;
}
int main(){
	sophuc m,n, k;
	cin>>m;
	cin>>n;
	k=m+n;
	cout <<k;
	return 0;
}
