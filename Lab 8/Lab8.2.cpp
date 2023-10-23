/* 2. Create class cEmployee with data members as empno,name and salary.
   Accept values from user. Store it in file.
   Display the contents from file.
   Program should be able to store information of multiple employees. */

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class cEmployee{
    int empno;
    string name;
    double salary;
    public:
        cEmployee(int empno,string name,double salary){
            this->empno=empno;
            this->name=name;
            this->salary=salary;
        }
        int getID(){
            return empno;
        }
        string getName(){
            return name;
        } 
        double getSalary(){
            return salary;
        }

};

int main()
{   
    int empno;
    string name,fname;
    double salary;
    string data;
    cout<<"Enter the File Name: ";
	cin>>fname;
    ofstream fout(fname.c_str()); 
	if(fout.is_open())
	{
		cout<<"open or Created  "<<endl;
	}
	else
	{
		cout<<"Error "<<endl;
	}
    char ans='Y';
    while(ans=='Y'||ans=='y')
	{   
        cout<<"Enter the Employee ID: ";
        cin>>empno;
        cout<<"Enter the Employee Name: ";
        cin>>name;
        cout<<"Enter the Employee Salary: ";
        cin>>salary;
        cEmployee E(empno,name,salary);
        fout<<"Employee Id:"<<E.getID()<<" Employee Name:"<<E.getName()<<" Employee Salary: "<<E.getSalary()<<endl;
        cout<<"Want to enter more : Y/N ";
        cin>>ans;
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
    return 0;
}