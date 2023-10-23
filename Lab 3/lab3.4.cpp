/*4. Create a class Point with data members as x,y. Add AcceptPoint and  add the display function. Create the object of this
class in main method and invoke all the methods in that class.*/

#include<iostream>
using namespace std;

class Point{
  private:
    int x,y;

    public:
        void acceptPoint(){
            cout<<"Enter the x :";
            cin>>x;
            cout<<"\nEnter the y:";
            cin>>y;

        }
        void display(){
            cout<<"Your point is "<<"("<<x<<","<<y<<")";
        }
};
int main(){
    Point p;
    p.acceptPoint();
    p.display();
    return 0;

}
