//	for(int i = 0; i < n; i++)
//		v.push_back(i); //them phan tu vao cuoi vector
//		if(!v.empty()) //kiem tra vector co rong khong
//			v.pop_back(); //lay bot phan tu o cuoi vector
//		
//	
//	cout << "vector co kich co la: "<<v.size()<<endl; //xem kich thuoc vector
	
#include <iostream>
#include <vector>
using namespace std;
void nhapdl(vector<int> v, int n, int k){
	cout << "Nhap so phan tu: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		cout<<"A["<<i<<"]= ";
		cin>>k;
		v.push_back(k);
	}
	cout<<"\nVector vua nhap la: ";
	for(int i = 0; i < n; i++){
		cout<<v.at(i)<<" ";
	}
}
//void mang2chieu(vector<int> v, int n, int m, int l, int k){
//	cout << "Nhap so hang: ";
//	cin >> n;
//	cout << "Nhap so cot: ";
//	cin >> m;
//	for(int i =0; i < n ;i++){
//		for(int j = 0; j<m;j++){
//			cout<<"A["<<i<<"]["<<j<<"]= ";
//			cin>>l;
//			v.pop_back(l);
//		}
//	}
//	for(int i =0; i < n ;i++){
//		for(int j = 0; j<m;j++){
//			cout<<"A["<<i<<"]["<<j<<"]= ";
//			cin>>l;
//			v.pop_back(l);
//		}
//	}
//}

int main(){
	vector<int> a;
	int b,c;
	nhapdl(a,b,c);
	

	
	return 0;
}
