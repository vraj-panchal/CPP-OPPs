/*
 * Q-7.cpp
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */





//============================================================================================

//Write a C++ program to read an integer n and prints the factorial of n, assume that n ≤ 10.

//=============================================================================================



#include<iostream>

using namespace std;

class fact{

private :

	int f=1;
	int n;

public:

	void factorial()
	{
		cout<<"Enter THe Number : ";
		cin>>n;


		for(int i=1 ;i<=n ; i++)
		{
			f=f*i;
		}

		cout<<"Factorial Is : "<<f<<endl;
	}
};

int main()
{
	fact f1;
	f1.factorial();

	return 0;
}


