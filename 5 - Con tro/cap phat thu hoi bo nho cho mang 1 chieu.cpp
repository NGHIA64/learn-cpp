#include <iostream>
using namespace std;
int main(){
	int *a,n;
	a = new int[n]; //cap phat vung nho cho p, p tuong duong voi mot mang gom n phan tu
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
	//thu hoi vung nho cua p
	//sau khi su dung p nen thu hoi vung nho
	delete a;
	return 0;
}
