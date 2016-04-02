#include <iostream>

using namespace std;

double sqrtnum(double num) //Our main function to find the square root.

{

    double lb=0; //lower bound initialization

    double ub=num, temp=0;

    /*upper bound initialization and taking

     a temporary variable to save partial results.*/
    
    int countinteration = num;
    

    

    /*We take iteration variable to make sure

     we perform the loop enough time so that

     we get closer to the exact value of the square root.

     Remember the more the iteration,

     the closer you are to the answer.*/




    

    while(countinteration != 0)

    {

        temp=(lb+ub)/2;

        if(temp*temp==num)

            //Checking whether we reached an exact number.

        {

            return temp;

        }

        else if(temp*temp > num)

        /*If not, re- initialize the

         upper or lower bound according to the conditions.*/

        {

            ub=temp;

        }

        else

        {

            lb=temp;

        }

        countinteration--;

    }

    return temp;

}

int main()

{

    double num, result;

    cout<<"Enter number\n";

    cin>>num;

    

    if(num < 0)

    {

        cout<<"Invalid Input, Please enter a non negative number.\n";

        return 0;

    }

    

    cout<<"The square root of the number is: "<<sqrtnum(num);

    return 0;

}
