#include <iostream>
#include <conio.h>
#define K 100
using namespace std;
int main(){
	int A[K];
	int n;
	cout<<"Nhap so phan tu: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"A["<<i<<"]= ";
		cin>>A[i];
	}
	cout<<"Cac phan tu cua mang A la: ";
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	
	getch();
}
