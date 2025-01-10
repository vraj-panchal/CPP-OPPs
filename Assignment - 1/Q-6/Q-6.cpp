/*
 * Q-6.cpp
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */





//=======================================================================

//Write a C++ program to swap two numbers.

//========================================================================



#include<iostream>

using namespace std;

class swaps
{

	int a,b;

public:

	swaps(int x,int y)
	{
		int c;
		a=x;
		b=y;

		c=a;
		a=b;
		b=c;

		cout<<"your Value A "<<a<<endl;
		cout<<"Your value B "<<b;
	}
};

int main()
{
	int a,b;

	cout<<"Enter The value A : "<<endl;
	cin>>a;
	cout<<"Enter The value b : "<<endl;
	cin>>b;

	swaps s1(a,b);


	 return 0;
}



