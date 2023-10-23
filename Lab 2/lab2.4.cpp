/*4. Write a program to calculate factorial of a number.
For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120*/


#include<iostream>
using namespace std;

int main7(){
	int num,fact=1,temp;
	
	cout<<"Enter the number: "<<endl;
	cin>>num;
	temp=num;
	while(num!=0){
		fact*=num;
		num--;
	}
	cout<<"Factorial of "<<temp<<" is "<<fact;
}
