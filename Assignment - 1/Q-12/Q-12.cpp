/*
 * Q-12.cpp
 *
 *  Created on: 20-Jul-2024
 *      Author: root
 */



#include<iostream>

using namespace std;

class sum{

private :

	int a[10],s=0;


public :

	sum()
	{
		cout<<"Enter The Number ";

		for(int i=0 ; i<10 ; i++)
		{
			cin>>a[i];
		}

				for(int i=0 ; i<10 ; i++)
				{
					s=s+a[i];
				}

					cout<<"Sum Of Enter Numbers : "<<s;

	}

};

int main()
{
	sum s1;

	return 0;
}

