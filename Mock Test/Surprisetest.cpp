//Develop two classes person and student where person is the base class, student is derived from the person class
//complete the student class which have fname,id,lname and an integer array of scores and also calculate grades based on the avg score
//and return the char grade also write person class with fname,lname,id and calculate method should be virtual in person class
//store all the details of student in one file
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Person{
    
    public:
        int id;
        string firstname,lastname;
        Person(int id,string firstname,string lastname){
            this->id=id;
            this->firstname=firstname;
            this->lastname=lastname;
        }
        virtual char calculate(){
            return '0';
        };
};
class Student:public Person{
    int avgmarks=0,scores[5];
    public:
        Student(int id,string firstname,string lastname,int scores[5]):Person(id,firstname,lastname)
        {
            this->scores[0]=scores[0];
            this->scores[1]=scores[1];
            this->scores[2]=scores[2];
            this->scores[3]=scores[3];
            this->scores[4]=scores[4];
            avgmarks=(scores[0]+scores[1]+scores[2]+scores[3]+scores[4])/5;
        }
        char calculate(){
             if(avgmarks>=85)
                return 'A';
            else if(avgmarks>=70)
                return 'B';
            else if(avgmarks>=55)
                return 'C';
            else if(avgmarks>=40)
                return 'D';
            else
                return 'E';

        }

    
};

int main()
{   char y='Y';
    int id;
    string firstname,lastname,fname,data;
    char Grade;
    int scores[5];
    cout<<"Enter the file name : ";
    cin>>fname;
    ofstream fout(fname.c_str());
    if(fout.is_open())
	{
		cout<<"File Opened!!"<<endl;
	}
	else
	{
		cout<<"Error opening file!!"<<endl;
        exit(0);
	}
    fout<<"\tStudent details are as follows:\t\n";
    while(y=='Y'||y=='y')
    {
        cout<<"\nEnter the ID of the person : ";
        cin>>id;
        cout<<"\nEnter the first name of the Person : ";
        cin>>firstname;
        cout<<"\nEnter the last name of the Person : ";
        cin>>lastname;
        cout<<"\nEnter the marks of the students: ";
        for(int i=0;i<5;i++)
        {
            cin>>scores[i];
        }
        Student P1(id,firstname,lastname,scores);
        Grade=P1.calculate();
        cout<<"\nThe grade of the student is : "<<Grade<<endl;
        fout<<"Student's ID: "<<id<<" First name: "<<firstname<<" Last name: "<<lastname<<" Grade: "<<Grade<<endl;
        cout<<"\nWant to Enter more : Y/N :";
        cin>>y;
    }
    cout<<"data Stored !!!"<<endl;
	fout.close();    
     ifstream fin(fname.c_str());	
	if(fin.is_open())
		cout<<"Reading data from file   "<<endl;	
	while( getline(fin,data))
        cout << data<<'\n';

    
	fin.close();

    return 0;
}