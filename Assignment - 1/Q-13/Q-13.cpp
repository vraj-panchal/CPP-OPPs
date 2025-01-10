/*
 * Q-13.cpp
 *
 *  Created on: 20-Jul-2024
 *      Author: root
 */




#include<iostream>

using namespace std;

class Twist{

private :

	int a[10],temp=0;

public:

	 void change()
	{
		cout<<"Enter The Number ";

		for(int i=0 ;i<10 ; i++)
		{
			cin>>a[i];
		}

				temp=a[0];
				a[0]=a[9];
				a[9]=temp;


						cout<<"Swap First And Last Elements : ";

						for(int i=0 ; i<10 ; i++)
						{
							cout<<"\n"<<a[i];
						}
	}

};

int main()
{
	Twist s;
	s.change();

	return 0;
}


