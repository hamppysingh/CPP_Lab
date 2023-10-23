/* 3:Write a program to copy the contents of one file and write it into another file and print it. */
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{    string data;
    ifstream fin("Read.txt");
    ofstream fout("Write.txt");
    
    if(fin.is_open())
		cout<<"\nFile to read data Opened!!"<<endl;
    else{
        cout<<"\nFile does not exist!!";
        return 0;
    }
    if(fout.is_open())
	{
		cout<<"File to write data Opened!!"<<endl;
	}
	else
	{
		cout<<"Error opening file!!"<<endl;
        exit(0);
	}
    while(getline(fin,data))
      fout<<data<<endl;
  fin.close();
  fout.close();
  cout<<"Data Copied!!";
  ifstream fin2("Write.txt");
  cout<<"\nReading data from file!!\n";
  while(getline(fin2,data))
    cout<<data<<endl;
  fin2.close();  
    return 0;
}