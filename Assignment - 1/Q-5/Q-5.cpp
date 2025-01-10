/*
 * Q-5.cpp
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */





//=======================================================================

//Write a C++ program to print the code (ASCII code) of a given character.

//========================================================================



#include<iostream>

using namespace std;

class Asci{

	char c;

public:

	 void Code()
	{

		cout << "Enter a charactor : ";
		cin >> c;

		int a=(int)c;


		cout<<"ASCII value of charactor :"<<a;
	}
};

int main()
{
	Asci a1;
	a1.Code();

	return 0;


}
