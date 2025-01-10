/*
 * Q-14.cpp
 *
 *  Created on: 20-Jul-2024
 *      Author: root
 */



#include<iostream>

using namespace std;

class revrese{

private :

	int a[10],temp=0;

public:

	revrese()
	{
		cout<<"Enter The Number ";

		for(int i=0 ;i<10 ; i++)
		{
			cin>>a[i];
		}
			for(int i=0 , j=10-1 ; i<j; i++,j--)
			{

						temp=a[j];
						a[j]=a[i];
						a[i]=temp;

			}

						cout<<"Revrese Array : ";

						for(int i=0 ; i<10 ; i++)
						{
							cout<<"\n"<<a[i];
						}
	}

};

int main()
{
	revrese r1;

	return 0;
}
