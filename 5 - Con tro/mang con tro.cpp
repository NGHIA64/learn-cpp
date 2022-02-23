#include <iostream>
using namespace std;
int main(){
	int *a,n,p[100];
	a=p;
	cout<<"Nhap so phan tu cua mang: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		cout<<"A["<<i<<"]= ";
		cin >> *(a+i);
	}
	cout << "Mang con tro vua nhap la: ";
	for(int i = 0; i < n; i++){
		cout<<*(a+i)<<" ";
	}
	return 0;
}
