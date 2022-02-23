#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream out;
	out.open("text.txt");
	if(out.fail()){
		cout << "Mo file khong thanh cong";
		return 0;
	}
	int n,i;
	cout << "Nhap so lan ghi file: ";
	cin >> n;
	while(n>i){
		int s;
		cout << "Nhap ki tu ghi vao file: ";
		cin >> s;
		
		out << s << " ";
		
		i++;
	}
	out.close();
	return 0;
}
