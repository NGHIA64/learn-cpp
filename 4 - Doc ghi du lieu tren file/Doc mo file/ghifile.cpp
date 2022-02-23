#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string s;
	ofstream out;
	out.open("text.txt");
	fout<<s;
	ifstream inp;
	inp.open("in.txt");
	
	while(!inp.eof()){
		getline(inp,s);
	}
	
	
}
