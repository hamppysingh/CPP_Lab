/*5. Write a program to calculate factors of a given number.*/

#include<iostream>
using namespace std;

int main(){
	
	int num;
	cout<<"Enter the number:\n";
	cin>>num;
	cout<<"factor of "<<num<<" are:\n";
	for(int i=1;i<=num;i++){
		
		if(num%i==0)
			cout<<i<<"\t";
	
	}
}
