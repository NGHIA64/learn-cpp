#include <iostream>
#include <math.h>
#define p 100
using namespace std;
void nhapmang(int a[], int &n){
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		cout << "A[" << i << "]= ";
		cin >> a[i];
	}
}
void ktra(int a[], int &n){
	cout << "Mang co: ";
	for(int i = 0; i < n; i++){
		int t = sqrt(a[i]);
		if(sqrt(a[i])*sqrt(a[i])==a[i]){
			cout << a[i] <<" ";
		}
	}
	cout << " la so chinh phuong";
}
int main(){
	int a[p];
	int b;
	nhapmang(a,b);
	ktra(a,b);
	return 0;
}
