#include <iostream>
#include <math.h>
using namespace std;
//lop PhanSo
class PhanSo{
	int a,b;
	public:
		phanso(){
			a=0;
			b=0;
		}//Ham tao khong tham so
		phanso(int a, int b);
		PhanSo operator+(PhanSo x);
		PhanSo rutgon();
		friend istream&operator>>(istream &is, PhanSo &x);
		friend ostream&operator<<(ostream &os, PhanSo &x);
};
//Trien khai ham thanh phan 
//Ham tao co tham so
PhanSo::phanso(int a, int b){
	this->a=a;
	this->b=b;
}
//Ham toan tu cong
PhanSo PhanSo::operator+(PhanSo x){
	PhanSo tmp;
	tmp.a=a*x.b+x.a*b;
	tmp.b=b*x.b;
	return tmp;
}
//Ham toan tu nhap
istream&operator>>(istream &is, PhanSo &x){
	
		
		cout<<"Nhap tu so: ";
		is>>x.a;
		cout<<"Nhap mau so: ";
		is>>x.b;
	
	return is;
	
}
//Ham toan tu xuat
ostream&operator<<(ostream &os, PhanSo &x){
	os << x.a <<"/"<<x.b;
	return os;
}
//Ham rut gon phan so
PhanSo PhanSo::rutgon(){
	int n, m;
	PhanSo rg;
	rg.a=this->a;
	rg.b=this->b;
	n=abs(rg.a);
	m=abs(rg.b);
	while(n!=m){
		if(n>m){
			n=n-m;
		}
		else{
			m=m-n;
		}
	}
	rg.a=a/n;
	rg.b=b/m;
	return rg;
}
//Ham main
main(){
	PhanSo a, b, c, d;
	cin >> a;
	cin >> b;
	c = a+b;
	//In ra man hinh cac ket qua
//	cout<<"Phan so chua rut gon: "<<c<<endl;
	d=c.rutgon();
	cout <<"Phan so da rut gon la: "<<d;
	
	
	return 0;
}
