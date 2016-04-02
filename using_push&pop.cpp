#include <iostream>
#include <cstdlib>
#include<cmath>


using namespace std;

const int length=25;

int stack_length[length];

int first, first_stack;



class stack {


public:
	
stack() { first = -1; first_stack=0;}
int pop()
{
if ( first == -1 )
{
cout<<" underflow stack"<<endl;
}
return stack_length[first--];
}
int isEmpty()
{
if(first==-1)
{cout<<endl<<"stack is Empty & n-values are popped"<<endl; }
}
void push(int n)
{
if ( first == length )
{
first_stack=-1;
}
else
{
stack_length[++first] = n;
}
}

int isFull()
{
if(first_stack == -1)
{cout<<" full stack"<<endl; }
}
~stack(){ }
};



main()
 
{
	
stack s;

s.push(5);
s.push(4);
s.push(3);
s.push(2);
s.push(1);

cout<< ""<<endl;
cout <<"first  poping value (n1) = "<<s.pop()<<"\n"<< endl;

cout <<"second poping value (n2) = "<<s.pop()<<"\n"<< endl;

cout <<"third  poping value (n3) = "<<s.pop()<<"\n"<< endl;

cout <<"forth  poping value (n4) = "<<s.pop()<<"\n"<< endl;


cout <<"fifth  poping value (n5) = "<<s.pop()<<"\n"<< endl;


s.isFull();

s.isEmpty();

return 0;

}
