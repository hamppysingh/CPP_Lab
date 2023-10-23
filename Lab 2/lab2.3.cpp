/*3. Write a program to accept a character, an integer n and display the next n characters.*/

#include<iostream>

using namespace std;

int main6(){
	char ch;
	int n;
	
	cout<<"Enter the character: \n";
	cin>>ch;
	
	cout<<"Enter the n\n";
	cin>>n;
	
	for(char i=0;i<n;i++){
		cout<<++ch<<" ";
	}
}
