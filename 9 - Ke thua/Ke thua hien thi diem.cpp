#include <iostream>
using namespace std;
//khai bao lop point
class point{
	public:
		int x, y;
		point(){
			x=y=0;
		}
		point(int , int );
		void pointdisplay();
		
};

point::point(int x, int y){
	this->x=x;
	this -> y=y;
}
void point::pointdisplay(){
	cout << "x= "<<x<<endl;
	cout<<"y = "<<y<<endl;
}
//khai bao lop circle ke thua lop point
class circle : public point{
	int r;
	public:
		circle(){
			x=y=0;
		}
		circle(int , int , int);
		void circledisplay();
};
circle::circle(int x, int y, int r){
	this->x;
	this->y;
	this->r;
}
void circle::circledisplay(){
	pointdisplay();
	cout <<"r= "<<r<<endl;
}
int main(){
	circle a(10, 20, 5);
	a.pointdisplay();
	a.circledisplay();
}
