/*1:Write a program that accepts numbers continuously as long as the number is positive and prints the
sum of the given numbers. */

#include<iostream>

using namespace std;


int main1(){
    int num,sum=0;

   do{
       cout<<"Enter the number:"<<endl;
       cin>>num;
    if(num>0)
        sum+=num;
   }while(num>0);
   cout<<"Sum is: "<<sum;
    return 0;
}
