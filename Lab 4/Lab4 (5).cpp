/*5. Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized constructors. 
Write getters and setters for all the data members. Also add the display function. 
Create the object of this class in main method and invoke all the methods in that class.*/

#include<iostream>
using namespace std;

class Complexnum{
  private:
    int x,y;

    public:
        Complexnum(){
            x=10;
            y=9;

        }
        Complexnum(int x,int y){
            this->x=x;
            this->y=y;

        }
        void display(){
            if(y>0)
                cout<<"\nDefault Complex No is "<<x<<"+"<<y<<"i ";
            else if(y<0)
                cout<<"\nDefault Complex No is "<<x<<""<<y<<"i ";
            else
                cout<<"\nDefault Complex No is "<<x<<"+"<<0<<"i "<<" = "<<x;

        }
         void paradisplay(){
            if(y>0)
                cout<<"\nParameterized Complex No is "<<x<<"+"<<y<<"i ";
            else if(y<0)
                cout<<"\nParameterized Complex No is "<<x<<""<<y<<"i ";
            else
                cout<<"\nParameterized Complex No is "<<x<<"+"<<0<<"i "<<" = "<<x;

        }
        void setReal(int x){
			this->x=x;
		}
		void setImaginary(int y){
			this->y=y;
		}
		int getReal(){
			return x;
		}
		int getImaginary(){
			return y;
		}
};
int main(){
    Complexnum C1,C2(6,7);
    C2.paradisplay();
	C1.display();
    int x,y;
    cout<<"\nEnter the Real No :";
    cin>>x;
    C1.setReal(x);
    cout<<"Enter the imaginary No :";
    cin>>y;
    C1.setImaginary(y);
    if(y>0)
        cout<<"\nChanged Complex No is "<<C1.getReal()<<"+"<<C1.getImaginary()<<"i ";
    else if(y<0)
        cout<<"\nChanged Complex No is "<<C1.getReal()<<""<<C1.getImaginary()<<"i ";
    else
        cout<<"\nChanged Complex No is "<<C1.getReal()<<"+"<<0<<"i "<<" = "<<C1.getReal();
    return 0;

}
