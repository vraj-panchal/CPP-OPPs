/*
 * Q-7.cpp
 *
 *  Created on: 30-Sep-2024
 *      Author: root
 */


#include<iostream>
using namespace std;

class Date
{
public:

	int dd;
	int mm;
	int yyyy;

		void get_data()
		{
			cout<<" \n Enter The Date ";
			cin>>dd>>mm>>yyyy;

		}

		void Display()
		{
			cout<<"The Date (DD/MM/YYYY) : "<<dd<<"/"<<mm<<"/"<<yyyy <<endl;
			Check_Date();

		}

		void Check_Date()
		{
			if(yyyy>=1900 && yyyy<=9999)
			{
				if(mm>=1 && mm <= 12)
				{
					if((dd >= 1 && dd <= 31) && (mm == 1 || mm == 2 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm==10 || mm == 12))
					{
						cout<<" Date Is Valid : "<<endl;
					}
					else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
					{
						cout<<" Date Is Valid : "<<endl;
					}
					else if((dd>=1 && dd<=28) && (mm==2))
					{
						cout<<"Date Is Valid :"<<endl;
					}
					else if(dd==29 && mm==2 && (yyyy%400 == 0 || (yyyy%4==0 && yyyy%100 != 0)))
					{
						cout<<"Date Is Valid :"<<endl;
					}
					else
					{
						cout<<"Date Is Invalid :"<<endl;
					}

				}
				else
				{
					cout<<"Date Is Invalid :"<<endl;
				}
			}
			else
			{
				cout<<"Date Is Invalid :"<<endl;
			}
			return;
		}

};



int main()
{
	Date D;

	D.get_data();
	D.Display();

}
