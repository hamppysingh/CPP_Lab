/*2:Create cpp application for bank account handling.
2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add  constr. (2 constrs : first to accept all details )

2.2 Add Business logic methods
Methods
public void withdraw(double amt) 
public void deposit(double amt)

2.3: Create object of account class and test withdraw and deposit methods. */

#include<iostream>
using namespace std;

class Bankaccount{
	private:
		int acct_no;
		string customer_name;
		double balance;
		
	public:
		Bankaccount(){
			this->acct_no=1;
			this->customer_name="default";
			this->balance=100;
			
		}		
		
		Bankaccount(int acct_no,string customer_name,double balance){
			this->acct_no=acct_no;
			this->customer_name=customer_name;
			this->balance=balance;			
		}	
		
		void withdraw(double amt){
			if(this->balance<amt)
				cout<<"Insufficient balance\n";
			else	
				this->balance=this->balance-amt;
		} 
		
		void deposite(double amt){
			this->balance+=amt;
		}
		void display(){
			cout<<"The available balance is "<<this->balance;
		}
};
int main(){
	Bankaccount b;
	int acct_no;
	string name;
	double balance;
	cout<<"Enter your account number: \n";
	cin>>acct_no;
	cout<<"Enter your name:\n";
	cin>>name;
	cout<<"Your balance?:\n";
	cin>>balance;
	Bankaccount b1(acct_no,name,balance);	
	int ch;
	double amt;
	cout<<"1.Deposite  2.Withdraw  3.Check balance 4.exit\n";
	
	 do{
	 	cout<<"Enter choice\n";
		cin>>ch;
    	switch(ch){
		case 1:
			cout<<"Enter amount to deposite\n";
			cin>>amt;
			b1.deposite(amt);
			break;
		case 2:
			cout<<"Enter amount to withdraw\n";
			cin>>amt;
			b1.withdraw(amt);
			break;
		case 3:
			b1.display();
			break;
			
		default:
			cout<<"Invalid input\n";			
	}
	}while(ch!=4);
	cout<<"Thank you!!!!";
	
}
