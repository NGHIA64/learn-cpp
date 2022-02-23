#include <iostream>
#define p 100
using namespace std;
int main(){
	int a[p][p];
	int n,m;
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
	cout<<"Mang 2 chieu vua nhap la: \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
			
		}
		cout<<endl;
	}
	return 0;
}
