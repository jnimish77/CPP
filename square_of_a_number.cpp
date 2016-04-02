#include <iostream>
#include<math.h>

int main()
{
  
  int base;
  int power;
  int exponent;
  long result=1;
  
  std::cout << "Enter the value of Base = " ;
  std::cin>> base;
  std::cout<< "enter the value of power = ";
  std::cin>> power;
  exponent = power;
  while (power != 0)
  {
    result *=base;
	--power;	
  } 
  std::cout<<base<<" Power "<< exponent <<" = "<< result;
  return 0;
}
