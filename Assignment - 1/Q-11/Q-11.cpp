/*
 * Q-11.cpp
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */


//=======================================================================

//Write a C++ program to count all the vowels in a given string.

//========================================================================


#include<iostream>
#include<string>

using namespace std;

class vovels{

private:

	char str[10];
	int i,c=0;

public :

	void count()
	{

		cout<<"Enter The String : ";
		cin>>str;

		for(i =0 ; str[i]!='\0';i++)
		{
			if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' ||
					str[i]=='O' || str[i]=='o' ||
					str[i]=='U' || str[i]=='u' )
			{
				c++;
			}
		}

		cout<<"Your String : "<<str<<endl;
		cout<<"Your String in Vowels : "<<c;

	}
};

int main()
{
	vovels n;
	n.count();
	return 0;
}


