/* 3:Create a abstract class Shape with pure virtual method area;
Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
Test these all classes by creating object of respective class. */
#include<iostream>
#include<stdio.h>
using namespace std;

class Shape{
	public:
		double Area;
		virtual void area()=0;
			//This one os a pure virtual method;
		void display()
		{
			cout<<"\nArea is : "<<Area;
		}
};
class Square:public Shape
{
	int side;
	public:
		void setside(int side)
		{
			this->side=side;
		}
		void area(){
			Area=side*side;	
		}
			
};
class Rec:public Shape
{	
int l1,l2;
	public:
		void setlb(int l1,int l2)
		{
			this->l1=l1;
			this->l2=l2;
		}
		void area(){
			Area=l1*l2;	
		}	
};
class Circle:public Shape
{
	double radius;
	public:
		void setradius(double radius)
		{
			this->radius=radius;
		}
		void area(){
			Area=22.0/7*radius*radius;	
		}	
};

int main()
{	
	Square sq;
	Circle c;
	Rec r;
	int choice;
	while(1)
	{
		cout<<"\nEnter\n------------ \n\t1 for Square \n\t2 for Rectangle \n\t3 for Circle \n\t4 for Exit\n------------\n\t: ";
		cin>>choice;
		switch(choice)
		{
			case 1: int side;
					cout<<"\nEnter the side of the square : ";
					cin>>side;
					sq.setside(side);
					sq.area();
					sq.display();
					break;
			case 2: int l1,l2;
					cout<<"\nEnter the sides of the rectangle : ";
					cin>>l1>>l2;
					r.setlb(l1,l2);
					r.area();
					r.display();
					break;		
			case 3: double radius;
					cout<<"\nEnter the radius of the circle : ";
					cin>>radius;
					c.setradius(radius);
					c.area();
					c.display();
					break;	
			case 4: cout<<"\nExiting.....";
					exit(0);
			default:cout<<"\nInvalid input!!!";
					break;					
		}
	}
	return 0;
}
