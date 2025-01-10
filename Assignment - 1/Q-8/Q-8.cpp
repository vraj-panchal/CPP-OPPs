/*
 * Q-8.cpp
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */


#include<iostream>

using namespace std;

class prime {

private :
	int num;
	int sum;

public:

	prime()
	{
		cout<<"Enter The Number : ";
		cin>>num;

		sum=0;
		int count=0;

			for(int n=2 ; count<num ; n++)
			{
				int isprime=1;

				for(int i=2 ;i*i<=n;i++)
				{
					if(n%i==0)
					{
						isprime=0;
						break;
					}
				}

				if(isprime)
				{
					sum =sum+n;
					count ++;
				}
			}

			cout<<"Sum Of first "<<num<<"prime Number "<<sum<<endl;

	}

};

int main()
{

	prime p;

	return 0;

}



