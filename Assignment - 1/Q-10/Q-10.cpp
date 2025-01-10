/*
 * Q-10.cpp
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */





//=======================================================================

//Write a C++ program to display the number in reverse order.

//========================================================================


#include<iostream>

using namespace std;

class revers
{

private :
	int n,num=0,digit;

public:

	revers()
	{

      cout<<"Enter The Digit ";
      cin>>n;

      int temp=n;

      while(n!=0)
      {
    	  digit=n%10;
    	  num = num*10+digit;
    	  n=n/10;
      }

      cout<<"Orignal Value : "<<temp<<endl;
      cout<<"Reverce Value : "<<num;
	}
};

int main()
{
	revers r1;

	return 0;
}
