/*5. Create a class ComplexNumber with data members real, imaginary. Create  AcceptComplexNumber() and the display function.
Create the object of this class in main method and invoke all the methods in that class.*/

#include<iostream>
using namespace std;

class Complexnum{
  private:
    int x,y;

    public:
        void acceptdetails(){
            cout<<"Enter the Real No :";
            cin>>x;
            cout<<"\nEnter the imaginary No :";
            cin>>y;

        }
        void display(){
            if(y>0)
                cout<<"Complex No is "<<x<<"+"<<y<<"i ";
            else if(y<0)
                cout<<"Complex No is "<<x<<""<<y<<"i ";
            else
                cout<<"Complex No is "<<x<<"+"<<0<<"i "<<" = "<<x;

        }
};
int main(){
    Complexnum C1;
    C1.acceptdetails();
    C1.display();
    return 0;

}
