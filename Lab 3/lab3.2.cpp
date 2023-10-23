/*Create a class Person with data members as name, age, city.
members. Also add accept and  display function. . Create the
object of this class in main method and invoke all the methods in that class. */


#include<iostream>
#include<string>
using namespace std;

class Person{

    private:
        string name,city;
        int age;

    public:
        void accept(){
            cout<<"Enter the name:"<<endl;
            cin>>name;

            cout<<"\nEnter age: ";
            cin>>age;

            cout<<"Enter city: \n";
            cin>>city;

        }

        void display(){
            cout<<"Name of the person is "<<name<<". His age is "<<age<<"  .He lives in "<<city;

        }
};
int main(){
    Person p;
    p.accept();
    p.display();

}
