#include <iostream>
#include <cstdlib>
#include<cmath>


using namespace std;

int x;
int y;
int z;

double angle_a;
double mag;
double PI;

class point
{

public: void set_x(int point_p)
{
x= point_p;
cout<<"value of given  x = "<<x<<endl;
}
public: void set_y(int point_q)
{
y = point_q;
cout<<"value of given  y = "<<y<<endl;
}
public: void set_z(int point_r)
{
z = point_r;
cout<<"value of given  z = "<<z<<"\n"<<endl;
}
public: void display()
{

cout<<"(x-y-z) co-ordinte presentation: "<<"("<<x<<","<<y<<","<<z<<")"<<"\n"<<endl;}
public: void magnitude()
{
mag=sqrt(x*x+y*y+z*z);
cout<<"magnitude value = "<<endl<<"\t"<<mag<<endl; 

}
public: void angle()
{
PI=acos(x/mag);
angle_a =PI*180.0/3.14;
cout<<"angle with respect to X-axis = "<<endl<<"\t"<<angle_a<<endl;
}
};

 main()
{
	
point point_q1;
point_q1.set_x(1);
point_q1.set_y(2);
point_q1.set_z(3);
point_q1.display();
point_q1.magnitude();
point_q1.angle();

return 0;


}
