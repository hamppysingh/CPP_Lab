/* 2:Create cpp application for bank account handling.
2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add  constr. (2 constrs : first to accept all details )

2.2 Add Business logic methods
Methods
public void withdraw(double amt) 
public void deposit(double amt)

2.3: Create object of account class and test withdraw and deposit methods. */
#include<iostream>
#include<string.h>
using namespace std;

class BankAccount{
	int acct_no;
	string name;
	double balance;
	
	public:
		BankAccount(){
			cout<<"\nEnter the account holder's name : ";
			cin>>name;
			cout<<"\nEnter the Current Balance : ";
			cin>>balance;
			if(balance<0)
				balance=0;
		}
		void setAid(int anum){
			acct_no=anum;
		}
		BankAccount(int acct_no,string name,double balance){
			this->acct_no=acct_no;
			this->name=name;
			this->balance=balance;
		}
		void withdraw(int amt)
		{
			balance-=amt;
			if(balance<0)
				balance=0;
		}
		void deposit(int amt)
		{
			balance+=amt;
			if(balance<0)
				balance=0;
		}
		void display()
		{
			cout<<"\nThe account balance of "<<name<<" and account no "<<acct_no<<" is : "<<balance;
		}
};

int main()
{
	int anum;
	string name;
	double amt;
	int choice;
	BankAccount A=BankAccount(1,"Mito",50000);
	A.display();
		cout<<"\nEnter 1 to access default acc. no  or enter your no: ";
		cin>>anum;
		if(anum!=1)
			goto label;
		if(anum==1)
		{   while(1){
			cout<<"\nEnter \t\n1 for withdraw \t\n2 for deposit \t\n3 for display \t\n4 for exiting : ";
			cin>>choice;
			switch(choice)
			{	
				case 1: cout<<"\nEnter the amount you want to withdraw : ";
						cin>>amt;
						A.withdraw(amt);
						break;
				case 2: cout<<"\nEnter the amount you want to deposit : ";
						cin>>amt;
						A.deposit(amt);	
						break;
				case 3:	A.display();
						break;
				case 4: cout<<"\nExiting...";
						exit(0);
				default:cout<<"\nInvalid Input";
						break; 						
			}
		}
		}
	label:
		BankAccount B;
		B.setAid(anum); 
		while(1)
		{	cout<<"\nEnter \t\n1 for withdraw \t\n2 for deposit \t\n3 for display \t\n4 for exiting : ";
			cin>>choice;
			switch(choice)
			{	
			case 1: cout<<"\nEnter the amount you want to withdraw : ";
					cin>>amt;
					B.withdraw(amt);
					break;
			case 2: cout<<"\nEnter the amount you want to deposit : ";
					cin>>amt;
					B.deposit(amt);	
					break;
			case 3:	B.display();
					break;
			case 4: cout<<"\nExiting...";
					exit(0);
			default:cout<<"\nInvalid Input";
					break; 						
			}
	}
	return 0;
}
