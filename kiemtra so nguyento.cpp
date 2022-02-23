//kiem tra so nguyen to
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n, cou;
	cou = 0;
	cout <<"Nhap so can kiem tra: ";
	cin >> n;
	if(n<2){
		cout << n<<" khong phai la so nguyen to";
		return 0;
	}
	for(int i = 2; i< sqrt(n);i++){
		if(n%i==0){
			cou++;
		}
	}
	if(cou==0){
		cout <<n<<" khong phai la so nguyen to";
	}
	else{
		cout<<n<<" la so nguyen to";
	}
	
	return 0;
}
