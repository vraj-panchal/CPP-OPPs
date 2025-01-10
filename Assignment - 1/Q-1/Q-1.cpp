/*
 * Q-1.cpp
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */


//=======================================================================

//Write a C++ program to find the Area and Perimeter of a Rectangle.

//========================================================================


#include<iostream>

using namespace std;


class Rect{

	int a,b;

public :

	 void area (int x, int y)
	 {
		 a=x;
		 b=y;

		 int result;
		 result=a*b;

		 cout <<"Area of Rectangle is : "<<result<<endl;

	 }

	 void pera(int x, int y)
	 {
		 a=x;
		 b=y;

		 int result =2*(a*b);
		 cout<<"Parameter of Rectangle is :"<<result;

	 }
};


int main()
{
	Rect r1;

	int x,y;

	cout<<"Enter The value X and Y : "<<endl;
	cin>>x;
	cin>>y;



	r1.area(x, y);
	r1.pera(x, y);

}
