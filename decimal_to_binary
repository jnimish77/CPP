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
	std::cout<<"Integer Part form the Given Number = "<<temp<<endl;
	 //"\n"<<"Fractional part of the Given Number = "<<temp1<<endl;
	decToBinary(temp);
     //	decToBinary(temp1);

}
	
