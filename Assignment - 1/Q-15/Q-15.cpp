/*
 * Q-15.cpp
 *
 *  Created on: 20-Jul-2024
 *      Author: root
 */


#include<iostream>

using namespace std;

class number{

private :

	int a[10],max=0,min=0,i;

public:

	void Count()
	{
		cout<<"Enter The Number ";

				for(i=0 ;i<10 ; i++)
				{
					cin>>a[i];
				}

				 max=a[0];
				 min=a[0];

					for(i=0 ; i<10 ; i++)
					{
						if(a[i]>max)
						{
							max=a[i];

						}
						if(a[i]<min)
						{
							min=a[i];
						}
					}

					cout<<"Max value "<<max<<endl;
					cout<<"min value "<<min;
	}
};

int main()
{
	number n1;
	n1.Count();

	return 0;
}

