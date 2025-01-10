/*
 * Q-8.cpp
 *
 *  Created on: 30-Sep-2024
 *      Author: root
 */

#include<iostream>
using namespace std;

class Book
{
protected :

	int no;
	string B_Name;
	float B_Price;

public:

	 void get_date()
	    {

	        cout<<"Enter the book no :";
	        cin>>no;

	        cout<<"Enter the book name :";
	        cin>>B_Name;

	        cout<<"Enter the book price :";
	        cin>>B_Price;

	    }

	    void Display(){
	        cout<<"\n";
	        cout<<"Book No : "<<no<<"\n";
	        cout<<"Book Name : "<<B_Name<<"\n";
	        cout<<"Book Price : "<<B_Price<<"\n";
	    }


};


class Author_detail
{
public:

   string author_name;
   int d = 0,m = 0,y = 0;



	   void get_detail()
	   {
		   cout<<"Enter the Author Name : ";
		   cin>>author_name;

		   cout<<"Enter the Publish Date (DD MM YYYY) : ";
		   cin>>d>>m>>y;
	   }

	   void display()
	   {
		   cout<<"Author Name : "<<author_name<<"\n";
		   cout<<"Publish Date : "<<d<<"/"<<m<<"/"<<y<<"\n";
	   }
};



class Operations_book : public Author_detail , public Book{
    public:
    string a_name;
    string b_name;

    void search_a_name()
    {
        cout<<"Enter the Author Name that you want to search : \n";
        cin>>a_name;
        for(int i=0;i<3;i++){
            if(a_name == author_name)
            {
            	Display();
                display();
            }
        }
    }
    void search_b_name()
    {
        cout<<"Enter the Book Name that you want to search :\n";
        cin>>b_name;

        for(int i=0;i<3;i++){
            if(b_name == B_Name)
            {
               Display();
                display();
            }
        }
    }
};

int main()
{
    Operations_book book[3],search;
    int choice;
    do{
        cout<<"\nPress 1:Input_Details\npress 2:Display_Details\npress 3:Search_By_Author\npress 4:Search_By_Book\npress 5:Exit\n";
        cout<<"Enter Your Choice :";
        cin>>choice;

        switch(choice)
        {
            case 1:
				for(int i=0;i<3;i++)
				{
					book[i].get_date();
					book[i].get_detail();
				}
            break;

            case 2:
            for(int i=0;i<3;i++)
            {
            	book[i].Display();
            	book[i].display();
            }
            break;

            case 3:
            search.search_a_name();

            break;

            case 4:
            search.search_b_name();
            break;

            case 5:
            	cout<<"You are out of the program....";
            return 0;

            default :
            	cout<<"Enter valid choice :\n";
        }

    }while(1);

    return 0;
}


