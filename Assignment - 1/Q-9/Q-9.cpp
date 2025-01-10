/*
 * Q-9.cpp
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */




//============================================================================================

//Write a C++ program to find the sum of first 10 natural numbers.

//=============================================================================================




#include<iostream>

using namespace std;

class first{

	int i;

public:

	first()
	{
		int s=0;
		for( i=1 ;i<=10 ; i++)
		{
			s = s+i;
		}

		cout<<"Sum of first 10 Natural NO  : "<<s;
	}
};

int main()
{

	first s1;

	return 0;
}
