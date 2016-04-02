
#include <iostream>
#include <cstdlib>
#include<cmath>
#include <stdexcept>


using namespace std;


class fraction
{
	
private:
	
int numerator,denominator;

public:
	
fraction(): numerator(0), denominator(0){}
fraction(int p, int q):numerator(p),denominator(q){}
void get_fraction()
{


}

void show_fraction()
{

cout <<"("<< numerator <<" / "<< denominator<<")" <<"\n"<< endl;

}

void addition_fraction(fraction,fraction);
fraction addition_f(fraction);

void multiplication_fraction(fraction,fraction);
fraction multiplication_f(fraction);

void division_fraction(fraction,fraction);
fraction division_f(fraction);

};


fraction fraction::addition_f(fraction y)
{
	
fraction a_t;

a_t.numerator=(numerator*y.denominator)+(denominator*y.numerator);
a_t.denominator=denominator*y.numerator;

return a_t;

}

fraction fraction::division_f(fraction x)
{
	
fraction a_tmp;

a_tmp.numerator=numerator+x.numerator;
a_tmp.denominator=denominator+x.denominator;

return a_tmp;

}

fraction fraction::multiplication_f(fraction z)
{
	
fraction a_tz;

a_tz.numerator=numerator*z.numerator;
a_tz.denominator=denominator*z.denominator;

return a_tz;

}

int main(int argc, char *argv[])
{
	
fraction f1(1,2);

cout<<""<<endl;	
cout <<"first value of the fraction =  " ;
f1.show_fraction();

fraction f2(5,6);
cout << "2nd value of the fraction =  " ;
f2.show_fraction();

cout << "first  Addition operation = " ;
fraction addition; 
addition = f1.addition_f(f2);
addition.show_fraction();

cout << "2nd  Addition  operation  = " ;
fraction multiplication;
multiplication = f1.multiplication_f(f2);
multiplication.show_fraction();

cout << "3rd  Addition  operation  = " ;
fraction division;
division = f1.division_f(f2);
division.show_fraction();

return 0;


}


