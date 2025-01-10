/*
 * Q-4.cpp
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */




//=======================================================================

//Write a C++ program to check whether a number is positive, negative or zero.

//========================================================================



#include<iostream>

using namespace std;

class num{
	int n;

public:

	num(int x)
	{
		n=x;



		if(n<0)
		{
			cout<<"negative Value"<<endl;
		}

		else if(n>0)
		{
			cout<<"Positive Value "<<endl;
		}

		else
		{
			cout<<"zero"<<endl;
		}
	}


};

int main()
{
	int n;
	cout<<"Enter The Number : ";
	cin>>n;

	num n1(n);
	return 0;


}





