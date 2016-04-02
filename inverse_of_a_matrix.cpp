
#include<iostream>


float g;
float det;
float inverse(float x1,float x2,float x3,float x4)
{
	det = (x1*x4)-(x2*x3);
	g= 1/det;
	
	x1=x1*g;
	x2=x2*g*(-1);
	x3=x3*g*(-1);
	x4=x4*g;
//std::cout<<"entered values are:\n";
std::cout<<"Value of the Determinant = "<<det<<"\n"<<"Value of determinant division with 1 =  "<< g<<"\n";
std::cout<<"Value of the inverse Matrix are: "<<"\n"<<x4<<"\t"<<x2<<"\n"<<x3<<"\t"<<x1<<"\n";
}

int main()
{
	float a,b,c,d;
	
	std::cout<< "enter the value of a:\n";

	std::cin>>a;
	std::cout<< "enter the value of b:\n";
	std::cin>>b;
	
	std::cout<< "enter the value of c:\n";
	std::cin>>c;
	std::cout<< "enter the value of d:\n";
	std::cin>>d;
	
	
	std::cout<<"entered values are:\n";
	std::cout<<a<<"\t"<<b<<"\n"<<c<<"\t"<<d<<"\n";
	
	 inverse (a,b,c,d);
	
	
	
}
