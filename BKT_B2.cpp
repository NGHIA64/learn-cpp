#include<iostream>
using namespace std;
class BOOK
{
	private:
		string TenS;  //Ten Sach
		string NXB;   //Nha xuat ban
		string TenTG; // Ten tac gia
		int SL;   // So luong
		double Gia; //Gia ban
	public:
		BOOK()
		{
			TenS=NXB=TenTG="";
			SL=Gia=0;
		}
		BOOK(string TenS,string NXB,string TenTG,int SL, double Gia)
		{
			this->TenS=TenS;
			this->NXB=NXB;
			this->TenTG=TenTG;
			this->SL=SL;
			this->Gia=Gia;
		}
		friend istream &operator>>(istream &is,BOOK &A);
		friend ostream &operator<<(ostream &os,BOOK &A);
		bool operator>(BOOK B);
};

istream &operator>>(istream &is,BOOK &A)
{
	cout<<"Nhap ten sach:";
	getline(is,A.TenS);
	cout<<"Nhap Nha xuat ban:";
	getline(is,A.NXB);
	cout<<"Ten tac gia:";
	getline(is,A.TenTG);
	cout<<"Nhap so luong:";
	is>>A.SL;
	cout<<"Nhap gia ban:";
	is>>A.Gia;
	return is;
}

ostream &operator<<(ostream &os,BOOK &A)
{
	os<<"Ten sach:"<<A.TenS<<endl;
	os<<"NXB:"<<A.NXB<<endl;
	os<<"Tac gia:"<<A.TenTG<<endl;
	os<<"So luong:"<<A.SL<<endl;
	os<<"Gia ban:"<<A.Gia<<endl;
	return os;
}

bool BOOK::operator>(BOOK B)
{
	if(this->Gia>B.Gia)
	{
		return true;
	}
	else return false;
}

main()
{
	BOOK *Book;
	int n;
	cout<<"Nhap so cac dau sach:";cin>>n;
	while(n<0)
	{
		cout<<"Khong hop le yeu cau nhap lai:";
		cin>>n;
	}
	cin.ignore();
	Book=new BOOK[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin cho cuon thu "<<i+1<<endl;
		cin>>Book[i];
		cin.ignore();
	}
	cout<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(Book[i]>Book[j])
			{
				swap(Book[i],Book[j]);
			}
		}
	}
	cout<<"Dand sach cac dau sach sau khi sap xep khong giam theo gia ban la\n\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\nThong tin ve dau sach thu "<<i+1<<" la:\n";
		cout<<Book[i];
	}
}
