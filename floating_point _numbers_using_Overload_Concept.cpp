#include<iostream>
using namespace std;

int decToBinary(int x)
{
		int remainder;

	if(x <= 1) {
		std::cout <<"Decimal to Binary of the Given Number = "<< x;
		return (0);
	}

	remainder = x%2;
	decToBinary(x >> 1);    
	std::cout << remainder;
	
}

float decToBinary(float f)
{
	int i=0;
	int a[7]={0,0,0,0,0,0,0};
	float t;
	
	for(i=0;i<7;i++)
	{
		t = f*2;
		if(t-1 >= 0.0)
		{
			a[i] = 1;
			f = t-1;
		
			
		}
		
		else
		{
			a[i]= 0;
			f=t;
			
		}
		
		if(f==0.0)
		break;
		}
		std::cout<<".";
		for(i=0; i<7; i++)
		std::cout<<a[i];
	}
	
	
	


int main()
{
	float number;
	int temp;
	float temp1;
	
	
	std::cout<<"enter the Nnumber = ";
	
	std:: cin >> number;
	temp = number;
	temp1= number-temp;
	std::cout<<"Given number is = "<<number<<endl;
	std::cout<<"Integer Part form the Given Number = "<<temp<< "\n"<<"Fractional part of the Given Number = "<<temp1<<endl;
	decToBinary(temp);
	decToBinary(temp1);
}
