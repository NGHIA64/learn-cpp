#include <iostream>
#include <fstream>
using namespace std;
main(){
	ifstream is;
	is.open("thietbi.inp");
	if(is.fail()){
		cout << "Mo file thietbi.inp khong thanh cong!";
		return 0;
	}
	string s;
	while(!is.eof()){
		getline(is,s);
		cout << s << endl;
	}
	
	ofstream os;
	os.open("thietbi.out");
	if(os.fail()){
		cout << "Mo file thietbi.out khong thanh cong!";
	}
	os << 2 << endl;
	os << 3 <<endl;
	os << "Noi com dien"<<endl;
	os << "Quat tram";
	cout <<"Chuong trinh da ket thuc!";
	cout <<"\nMo file thietbi.out de kiem tra!";
	is.close();
	os.close();	
	
	
	return 0;
}
