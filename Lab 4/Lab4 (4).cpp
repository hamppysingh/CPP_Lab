/*4. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;

class Point{
  private:
    int x,y;

    public:
        Point(){
            x=7;
            y=10;
        }
        Point(int x,int y)
        {
        	this->x=x;
        	this->y=y;
		}
		void setX(int x){
			this->x=x;
		}
		void setY(int y){
			this->y=y;
		}
		int getX(){
			return x;
		}
		int getY(){
			return y;
		}
        void display(){
            cout<<"\nParameterized Constructor Point is "<<"("<<x<<","<<y<<")";
        }
        void displaydef(){
            cout<<"\nDefault Constructor Point is "<<"("<<x<<","<<y<<")";
        }
};
int main(){
    Point p(5,6);
    int x,y;
    p.display();
    cout<<"\nEnter the new x :";
    cin>>x;
    p.setX(x);
    cout<<"Enter the new y:";
    cin>>y;
    p.setY(y);
    cout<<"Changed Values is "<<"("<<p.getX()<<","<<p.getY()<<")";
    Point p1;
    p1.displaydef();
    return 0;

}
