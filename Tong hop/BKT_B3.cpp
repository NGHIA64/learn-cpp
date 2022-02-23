#include<iostream>
using namespace std;
class VEHICLE
{
	private:
		string Hangsx;
		float Gia;
		int NamSX;
	public:
		VEHICLE()
		{
			Hangsx="";
			Gia=NamSX=0;
		}
		void Nhapdl()
		{
			cout<<"Nhap hang SX:";
			getline(cin,this->Hangsx);
			cout<<"Nhap Gia ban:";
			cin>>this->Gia;
			cout<<"Nhap nam sx:";
			cin>>this->NamSX;
		}
		void HienThi()
		{
			cout<<"Hang san xuat:"<<Hangsx<<endl;
			cout<<"Gia ban:"<<Gia<<endl;
			cout<<"Nam SX:"<<NamSX<<endl;
		}
		float GiaBan()
		{
			return this->Gia;
		}
};

class MORTOR:public VEHICLE
{
	private:
		float DungtichXL;
	public:
		MORTOR():VEHICLE()
		{
			DungtichXL=0;
		}
		void Nhapdl()
		{
			VEHICLE::Nhapdl();
			cout<<"Nhap dung tich xi lanh mortor:";
			cin>>DungtichXL;
			cin.ignore();
		}
		void HienThi()
		{
			VEHICLE::HienThi();
			cout<<"Dung tich xi lanh:"<<DungtichXL<<endl;
		}
		bool SieuXe()
		{
			if(GiaBan()>=45000 && DungtichXL>=300)
			{
				return true;
			}
			else return false;
		}
		
};

class CAR:public VEHICLE
{
	private:
		float TGtangtoc;
	public:
		CAR():VEHICLE()
		{
			TGtangtoc=0;
		}
		void Nhapdl()
		{
			VEHICLE::Nhapdl();
			cout<<"Nhap thoi gian tang toc len 100km/h Car:";
			cin>>TGtangtoc;
			cin.ignore();
		}
		void HienThi()
		{
			VEHICLE::HienThi();
			cout<<"Thoi gian tang toc len 100km/h:"<<TGtangtoc<<endl;
		}
		bool SieuXe()
		{
			if(GiaBan()>=500000 && TGtangtoc<=300)
			{
				return true;
			}
			else return false;
		}
		
};

main()
{
	MORTOR *MT;
	int n;
	cout<<"Nhap so luong xe motor:";cin>>n;
	MT=new MORTOR[n];
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin cho xe mortor thu "<<i+1<<endl;
		MT[i].MORTOR::Nhapdl();
	}
	
	CAR *C;
	int m;
	cout<<"Nhap so luong xe O to:";cin>>m;
	C=new CAR[m];
	cin.ignore();
	for(int i=0;i<m;i++)
	{
		cout<<"\nNhap thong tin cho xe O to thu "<<i+1<<endl;
		C[i].CAR::Nhapdl();
	}
	
	cout<<" \n\n Danh sach sieu xe morto la \n\n";
	for(int i=0;i<n;i++)
	{
		if(MT[i].MORTOR::SieuXe()==true)
		{
			cout<<"\n Mortor thu "<<i+1<<endl;
			MT[i].MORTOR::HienThi();
		}
	}
	cout<<" \n\n Danh sach sieu xe o to la \n\n";
	for(int i=0;i<m;i++)
	{
		if(C[i].CAR::SieuXe()==true)
		{
			cout<<"\n O to thu "<<i+1<<endl;
			C[i].CAR::HienThi();
		}
	}
	return 0;
}
