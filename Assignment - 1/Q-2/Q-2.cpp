/*
 * Q-2.cpp
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */




//=======================================================================

//Write a C++ program to convert temperature in Celsius to Fahrenheit

//========================================================================



#include<iostream>

using namespace std;

class temp{

	int f;

public:

	void Fahren(int c)
	{
		 f=(c*9/5)+32;

		cout << "Fahrenheit : "<<f;
	}

};
int main()
{
	int c;

	cout << "Enter THe Celsius Value :";
	cin >> c;

	temp t1;
	t1.Fahren(c);

	return 0;

}


