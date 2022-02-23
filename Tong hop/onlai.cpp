#include <iostream>
#include <math.h>
using namespace std;

class phanso
{
private:
	double a,b;
public:
	phanso(){
		a=0;
		b=0;
	}
	phanso(double,double);
	phanso operator+(phanso);
	friend istream&operator>>(istream &is,phanso &x);
	friend ostream&operator<<(ostream &os, phanso &x);

};

phanso::phanso(double a,double b)
{
	this->a=a;
	this->b=b;
}
phanso phanso::operator+(phanso x){
	phanso tmp;
	tmp.a=a+x.a;
	tmp.b=b+x.b;
	return tmp;
}
istream&operator>>(istream &is,phanso &x){
	cout<<"Nhap a: ";
	is>>x.a;
	cout<<"Nhap b: ";
	is>>x.b;
	return is;

}
ostream&operator<<(ostream &os, phanso &x){
	os<<x.a<<" + "<<x.b<<"*i";
	cout<<endl;
	return os;
}





main(){

	phanso A,B,C;
	cin>>A;
	cout<<"So phuc a la: "<<A;
	cin>>B;
	cout<<"So phuc b la: "<<B;
	C=A+B;
	cout<<"A * B = "<<C;

	return 0;
}
