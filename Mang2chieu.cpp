#include <iostream>
#include <conio.h>
#define K 100
using namespace std;
int main()
{
	int A[K][K];
	int n,m;
	cout<<"Nhap so cot: ";cin>>n;
	cout<<"Nhap so dong: ";cin>>m;
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"A["<<i<<"] ["<<j<<"]= ";
			cin>>A[i][j];
		}
	}
	cout<<"Mang la: \n";
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<A[i][j]<<" ";
			
			
		}
		cout<<endl;
	}
	getch();
	return 0;
	
}

