/*
 * Q-3.cpp
 *
 *  Created on: 11-Oct-2024
 *      Author: root
 */

#include<iostream>
using namespace std;

class Employee
{
protected :
		int emp_id;
		string name;
		int salary;

public:
		Employee()
		{}
		Employee(int id,string n,int s)
		{
			emp_id=id;
			name=n;
			salary=s;
		}

		void GET_DATA()
		{
			cout<<"\n Enter The Employee Id : ";
			cin>>emp_id;

			cout<<"\n Enter The Employee Name : ";
			cin>>name;

			cout<<"\n Enter The Employee Salary : ";
			cin>>salary;
		}

		void DISPLAY()
		{
			cout<<"\n\n Emp ID : "<<emp_id;
			cout<<"\n Name : "<<name;
			cout<<"\n Salary : "<<salary;
		}

};


class Department : public Employee
{
protected :

	string Dep_Name;
	int Total_Emp;

public:

			Department(){}
	        Department(string Name,int employee)
	        {
	                Dep_Name=Name;
	                Total_Emp=employee;
	        }

	        void DATA()
	        {
	        	Employee::GET_DATA();

	        	cout<<"\n Enter DepartMent Name : ";
	        	cin>>Dep_Name;

	        	cout<<"\n Enter The Total Employee : ";
	        	cin>>Total_Emp;

	        }

	        void Disply()
	        {
	        	Employee::DISPLAY();

	        	cout<<"\n Department Name : "<<Dep_Name;
	        	cout<<"\n Total Employee : "<<Total_Emp;
	        }

};


class Date : public Department
{
    protected:

        int dd,mm,yyyy;

    public:

        Date()
        {}
        Date(int d,int m,int y)
        {
            dd=d;
            mm=m;
            yyyy=y;
        }

        void INPUT()
        {
            Department ::DATA();
            cout<<"\n Enter The Date (DD/MM/YYYY) : ";
            cin>>dd>>mm>>yyyy;

        }

        void display()
        {
            Department::Disply();

            cout<<"\n (DD/MM/YYYY) : "<<dd<<"/"<<mm<<"/"<<yyyy;
        }

};


int main()
{

    int size=2;

    Date D[size];

    for(int i=0 ; i<size ; i++)
    {
        D[i].INPUT();

    }

    for(int i=0 ; i<size ;i++)
    {
        D[i].display();
    }
}

