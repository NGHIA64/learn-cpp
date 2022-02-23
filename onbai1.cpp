#include <iostream> 
#include <fstream>
using namespace std;
main(){
	ifstream finp;
	finp.open("thietbi.inp");
	if(finp.fail()){
		cout << "Khong mo file thanh cong!";
		return 0;
	}
	string s;
//	finp >> s;
//	cout << s <<endl;
	int dem, sld;
	finp>>sld;
	int find, dem1;
	while(!finp.eof()){
		finp >> dem;
		if(dem>=100){
			dem1++;
		}
	}
	cout << "Do la: "<<dem1;
	while(!finp.eof()){
		
		getline(finp,s);
		
		cout << s<<endl;
		
	}
	ofstream fout;
	fout.open("thietbi.out");
	if(fout.fail()){
		cout << "Mo file khong thanh cong";
		return 0;
	}
	int a,b,c;
	fout << dem1 << endl;
	fout << 15 <<" "<<8;
	return 0;
}
