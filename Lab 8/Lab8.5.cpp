/* 5:Defines a Student class with attributes like name, age, and grade.
Initializes a vector of Student objects.
Allows the user to add new students to the vector with their name, age, and grade.
Prints the list of students. */
#include <iostream>
#include <vector>
#include<string.h>
#include <stdlib.h>

using namespace std;

class Student{
    int  marks1,marks2,marks3,total,age;
    string name;
    double percentage;
    public:
        void acceptInfo()
        {
            cout<<"Enter the Name : ";
            cin>>name;
            cout<<"Enter the age: ";
            cin>>age;
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
        void displayStudentDetails(){
        	cout<<"Name of the student is "<<name<<" of age "<<age<<" got ";
			displaygrade();
			cout<<endl;
		}
};

int main()
{
    vector<Student> S1;
    Student S;
    int choice,i=0;
    do{ cout<<"\nMenu : Press\n--------------------\n\t1 for Accepting Input\n\t2 for Display Total\n\t3 for Display Percentage\n\t4 for Display Student details with Grade\n\t5 for Exit\n--------------------\n";
        cout<<"\nEnter the choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:  S.acceptInfo();
                    S1.push_back(S);
                    i++;
                break;
            case 2:for(int j=0;j<i;j++)
                    {
                        cout<<"Student "<<j+1<<" ";
                        S1[j].displaytotal();
                        cout<<endl;
                    }
                break;
            case 3:for(int j=0;j<i;j++)
                    {
                        cout<<"Student "<<j+1<<" ";
                        S1[j].displaypercentage();
                        cout<<endl;
                    }
                break;
            case 4:
                for(int j=0;j<i;j++)
                    {
                        S1[j].displayStudentDetails();
                        cout<<endl;
                    }
                    break;
            case 5:exit(0);
        }
    }while(choice!=5);
    return 0;
}

