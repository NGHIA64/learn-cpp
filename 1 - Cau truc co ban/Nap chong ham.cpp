//Nap chong ham
//Viet chuong trinh co cac ham cho phep
//Hien thi dong gom 45 ki tu "*"
//Ham cho phep hien thi 45 ki tu tuy y
//Ham cho phep hien thi n ki tu bat ki 
#include <iostream>
using namespace std;
void display_char_line(){
	for(int j = 0; j < 45; j++)
		cout<<"*";
		cout<<endl;
	
}
void display_char_line(char ch){
	for(int j = 0; j < 45; j++)
		cout << ch;
		cout << endl;
	
	
}

void display_char_line(char ch, int n){
	for(int j = 0; j < n; j++)
		cout << ch;
		cout << endl;
}

int main(){
	display_char_line();
	display_char_line('=');
	display_char_line('+', 30);
	return 0;
}
