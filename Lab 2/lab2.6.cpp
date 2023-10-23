/*6. Accept two numbers and calculate GCD of them.*/
#include<iostream>
using namespace std;

int main()
{
	int no1,no2,gcd;
	cout<<"Enter the two numbers : ";
	cin>>no1>>no2;
	for(int i=1;i<=no1&&i<=no2;i++)
	{
		if(no1%i==0&&no2%i==0)
		{
			gcd=i;
		}
	}
	cout<<"GCD of "<<no1<<" & "<<no2<<" is : "<<gcd;
	
	return 0;
}
