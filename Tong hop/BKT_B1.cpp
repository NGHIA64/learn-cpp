#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int GTMin(vector<int> v, int n)
{
	int Min=v[n-1];
	for(int i=0;i<n;i++)
	{
		if(v[i]<Min)
		{
			Min=v[i];
		}
	}
	return Min;
}
main()
{
	ifstream finp;
	finp.open("thietbi.inp");
	if(finp.fail())
	{
		cout<<"Mo file thietbi.inp khong thanh cong\n";
		return 0;
	}
	int n;
	finp>>n;
	int tmp;
	vector<int> v;
	for(int i=0;i<2*n;i++)
	{
		finp>>tmp;
		v.push_back(tmp);	
	}
	finp.close();
	int dem=0, dem1=0;
	cout<<"\n\nTong so luong cac thiet bi co gia tri >=100 la:";
	for(int i=0;i<n;i++)
	{
		if(v[i]>=100)
		{
			dem+=v[i+n];
			dem1++;
		}
	}
	cout<<dem<<endl<<endl;
	ofstream fout;
	fout.open("thietbi.out");
	if(fout.fail())
	{
		cout<<"Mo file thietbi.out khong thanh cong\n";
	}
	fout<<dem1<<endl;
	for(int i=0;i<n;i++)
	{
		if(v[i]==GTMin(v,n))
		{
			fout<<v[i+n]<<" ";
		}
	}
	fout.close();
	cout<<"Mo file thietbi.out ra xem ket qua!";
	return 0;
}
