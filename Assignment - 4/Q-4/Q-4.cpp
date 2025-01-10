/*
 * Q-4.cpp
 *
 *  Created on: 14-Oct-2024
 *      Author: root
 */

#include<iostream>
using namespace std;

class Product
{
    protected:

        string P_Name;
        float price;

    public:

        Product()
        {}
        Product(string n,float p)
        {
            P_Name=n;
            price=p;
        }

        void get_data()
        {
            cout<<"\n Enter The Product Name : ";
            cin>>P_Name;

            cout<<"\n Enter The Price : ";
            cin>>price;
        }

        void disply()
        {
            cout<<"\n"<<P_Name<<endl;
            cout<<price<<endl;
        }
};

class Discount : public Product
{
    protected:

        float discout ;

    public:

        int choice;

        Discount()
        {}
        Discount(float d)
        {
            discout=d;
        }

        void Data()
        {
        Product::get_data();

        char choice;
        cout << "Is it a discounted product (Y/N)? ";
        cin >> choice;

        if (choice == 'Y' || choice == 'y') {
            cout << "Enter Discount Percentage: ";
            cin >> discout;

        } else
        {
            discout = 0.0;
        }
    }

    float get_final_price() {
        return price - (price * discout / 100);
    }

    void display() {
        Product::disply();
        cout << "Discount: " << discout << "%" << endl;
        cout << "Final Price after Discount: $" << get_final_price() << endl;
    }
};


int main()
{

    int size = 2;

    Discount D[size];

        for(int i=0 ; i<size ;i++)
        {
            D[i].Data();

        }

        for(int i=0 ; i<size ;i++)

        {
            D[i].display();
        }
}
