#include <iostream>
#define o 100
using namespace std;
void nhapdl(int p[],int *a,int &n){
	a=p;
	cout<<"Nhap so phan tu cua mang: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		cout<<"A["<<i<<"]= ";
		cin >> *(a+i);
	}
}
void hienthi(int p[],int *a,int &n){
	a=p;
	cout<<"Mang con tro la: ";
	for(int i = 0; i < n; i++){
		cout<<*(a+i)<<" ";
		
	}
}
int main(){
	int k[o],*m,l;
	m=k;
	nhapdl(k,m,l);
	hienthi(k,m,l);
	return 0;
	
	
}
