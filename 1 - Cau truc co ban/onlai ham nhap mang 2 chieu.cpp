#include <iostream>
#define p 100
using namespace std;
void nhapdl(int a[][p], int &n, int &m){
	cout<<"Nhap so hang: ";
	cin>>n;
	cout<<"Nhap so cot: ";
	cin>>m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout<<"A["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}
void inmang(int a[][p], int &n, int &m){
	cout<<"\nMang vua nhap la: \n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout<<a[i][j]<<" ";
			
		}
		cout<<endl;
	}
}
int main(){
	int a[p][p];
	int n,m;
	nhapdl(a,n,m);
	inmang(a,n,m);
	return 0;
}
