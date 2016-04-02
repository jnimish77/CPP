
#include <iostream>
#include <cstdlib>
#include<cmath>
#define bool int

using namespace std;

double r00,r01,r10,r11,rij;
double det;
double i,j;
double c00,c01,c10,c11;

bool isSingular(int a)
	{
	if(a==0)
        	{
		return 1;
		}
	else
		{
		return 0;
		}
	}

         
class matrix{
      
              
              
      public:
          
          void set_r00(int p){
               r00= p;
               } 
          void set_r01(int q){
               r01= q;
               } 
void set_r10(int r){
               r10= r;
               } 
void set_r11(int x){
               r11= x;
               } 
          
          
          
          
          void display(){


cout<<"Given matrix values are :"<<endl;
cout<<r00<<"  "<<r01<<endl;
cout<<r10<<"  "<<r11<<"\n "<<endl;
}
  
           
void determinant(){
          det=(r00*r11)-(r01*r10);
cout<<"Value of the Matrix Determinant =  "<<endl<<det<<"\n"<<endl;


               
 }     
void inverse(){
c00=r11/det;
c11=r00/det;
c01=-r01/det;
c10=-r10/det;
cout<<"Inverse of the Matrix = "<<endl;
cout<<c00<<"    "<<c01<<endl;
cout<<c10<<"  "<<c11<<"\n"<<endl; } 
  void singular(){                                                 
                   if ( isSingular(det) == 1)
                   {
                   cout<<"It's' a Singular Matrix"<<endl;
                   }
                   else
                   {
                       cout<<"It's not a Singular Matrix"<<endl;
                   }
                   }

~matrix(){}
};


int main()
{
    matrix q1;
    q1.set_r00(1);
    q1.set_r01(2);
q1.set_r10(3);
q1.set_r11(4);


    q1.display();
    q1.determinant();
    q1.inverse();
    q1.singular();
    
    return 0;

}
