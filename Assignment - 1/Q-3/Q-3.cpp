/*
 * Q-3.cpp
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */




//=======================================================================

//Write a C++ program to compute quotient and remainder.

//========================================================================




#include<iostream>

using namespace std;

class divided{

	int a,b;

public:

	void divid()
	{

		cout << "Enter Dividend :";
		cin >> a;

		cout << "Enter Devisor : ";
		cin >> b;

		int quotient = a/b;
		int remainder = a%b;

		cout<<"Quotient : "<< quotient<< endl;
		cout<<"Remainder : "<< remainder;

	}
};

int main()
{
	divided D1;
	D1.divid();

	return 0;
}



