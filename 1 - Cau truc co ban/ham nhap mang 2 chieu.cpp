#include <iostream>
#define p 100
using namespace std;
void nhapdl(int a[][p],int &n, int &m){
	cout<<"Nhap so hang: ";
	cin>>n;
	cout<<"Nhap so cot: ";
	cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}
void inmang(int a[][p],int &n, int &m){
	cout<<"Mang 2 chieu vua nhap la: \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
			
		}
		cout<<endl;
	}
}
int tong(int a[][p],int &n, int &m){
	int tmp=0;
		for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			tmp=tmp+a[i][j];
			
		}
	
	}
	return tmp;
}
int main(){
	int a[p][p];
	int n,m;
	nhapdl(a,n,m);
	inmang(a,n,m);
	cout<<"Tong cac phan tu cua mang la: "<<tong(a,n,m);
	return 0;
}
