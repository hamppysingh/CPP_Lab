/*7. Write a menu driven program to do following operations :
a) Compute area of circle
b) Compute area of rectangle
c) Compute area of triangle
d) Exit
Display menu, ask choice to the user, depending on choice accept the parameters and perform the
operation. Continue this process until user selects exit option.*/

#include<iostream>
using namespace std;

int main(){
	cout<< " 1.Compute area of circle\n 2.Compute area of rectangle\n 3.Compute area of triangle\n 4.Exit\n";
	int choice;
	double area;
	do{
	cout<<"Enter choice\n";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Enter radius\n";
			int r;
			cin>>r;
			area=22/7.0*r*r;
			cout<<"Area of circle "<<area<<endl;
			break;
			
		case 2:
			cout<<"Enter length and width of ractangle:\n";
			int l,w;
			cin>>l>>w;
			area=l*w;
			cout<<"Area of rectangle is "<<area<<endl;
			break;
			
		case 3:
			cout<<"Enter base and heigth of traingle \n";
			int b,h;
			cin>>b>>h;
			area=1/2.0*b*h;
			cout<<"Area of triangle is "<<area<<endl;
			break;
		case 4:
			exit(0);

		default: cout<<"Invalid input";
			break;
	}
}while(choice!=4);
}
