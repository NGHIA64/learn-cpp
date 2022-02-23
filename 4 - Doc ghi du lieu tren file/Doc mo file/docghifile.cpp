#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	ifstream finp;
	finp.open("text.txt");
	if(finp.fail()){
		cout <<"Mo file khong thanh cong";
		return 0;
	}
	string s;
	int x, tong= 0;
	while(!finp.eof()){
		finp >> x;
		if(finp.eof()){
			break;
		}
		getline(finp,s);
		cout<<s<<endl;
		tong+=x;
		cout<<"\nTong cua day so la: "<<tong;
	}
	ofstream fout;
	fout.open("in.txt");
	if(fout.fail()){
		cout << "Mo file khong thanh cong!";
		return 0;
	}
	int n;
	cout << "\nCho so luong so: ";
	cin >> n;
	cout << "Nhap cac so: "<< endl;
	int i=0;
	int t;
	while(i<n){
		cout << "So thu "<<i<<": ";
		cin >>t;
		fout << t <<" ";
		i++;
	}
	
	fout.close();
	return 0;
}
