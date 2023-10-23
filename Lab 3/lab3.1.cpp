/******************************************************************************
1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>

using namespace std;

class Student{
    int rollno, marks1,marks2,marks3,total;
    double percentage;
    public:
        void acceptInfo()
        {
            cout<<"Enter the roll no : ";
            cin>>rollno;
            cout<<"Enter the marks in subject 1 : ";
            cin>>marks1;
            cout<<"Enter the marks in subject 2 : ";
            cin>>marks2;
            cout<<"Enter the marks in subject 3 : ";
            cin>>marks3;
            total=marks1+marks2+marks3;
            percentage=total/300.0*100;
        }
        void displaytotal()
        {

            cout<<"Total marks: "<<total;
        }
        void displaypercentage()
        {

            cout<<"Percentage : "<<percentage<<"%";
        }
        void displaygrade(){
            if(percentage>=85)
                cout<<"Grade : A";
            else if(percentage>=70)
                cout<<"Grade : B";
            else if(percentage>=55)
                cout<<"Grade : C";
            else if(percentage>=40)
                cout<<"Grade : D";
            else
                cout<<"Grade : E";

        }
};

int main()
{
    Student S1;
    int choice;
    do{ cout<<"\nMenu : Press\n--------------------\n\t1 for Accepting Input\n\t2 for Display Total\n\t3 for Display Percentage\n\t4 for Display Grade\n\t5 for Exit\n--------------------\n";
        cout<<"\nEnter the choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:S1.acceptInfo();
                break;
            case 2:S1.displaytotal();
                break;
            case 3:S1.displaypercentage();
                break;
            case 4:S1.displaygrade();
                    break;
            case 5:exit(0);
        }
    }while(choice!=5);
    return 0;
}

