#include <iostream>
#define K 100
using namespace std;

void nhapdl(int a[], int &n){
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"A["<<i<<"]= ";
		cin>>a[i];
	}
	
}
void hienthi(int a[],int &n){
	cout<<"Mang vua nhap la: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		
	}
}

int spt(int a[],int &n){
	int spt = 0;
	for(int i=0;i<n;i++){
		spt=spt+a[i];
		
	}
	return spt;
	
}
//tinh tong cac phan tu chia het cho 2
int tong(int a[],int &n){
	int spt = 0;
	
	for(int i=0;i<n;i++){
		if(a[i] % 2 == 0){
			spt=spt+a[i];
		}
	
		
	}
	return spt;
	
}
int main(){
	int a[K];
	int n;
	nhapdl(a,n);
	hienthi(a,n);
	
	
	cout<<"\nTong cac phan tu la: "<<spt(a,n);
	cout<<"\nTong cac phan tu chia het cho 2 la: "<<tong(a,n);
	
	
	
	return 0;
}
