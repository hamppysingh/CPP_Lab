/* 1 Write a program to store characters 'A' to 'Z' in the file .
   Display the contents of file.. */
#include<iostream>
#include<fstream>
using namespace std;

int main()
{	string name;
    char data;
	cout<<"Enter Name:"<<endl;
	cin>>name;
	ofstream fout(name.c_str()); 
	if(fout.is_open())
	{
		cout<<"open or Created  "<<endl;
	}
	else
	{
		cout<<"Error "<<endl;
	}
	for(char i='A';i<='Z';i++)
	{
		fout<<i;
	}
	cout<<"data Stored !!!"<<endl;
	fout.close();
	ifstream fin(name.c_str());	
	if(fin.is_open())
		cout<<"Reading data from file   "<<endl;
	fin>>data;	
	while (!fin.eof( ))
	{		 
		//inputFile>>line;
		cout<<data<<endl;
		fin>>data;
	}
	fin.close();	
	return 0;
}
