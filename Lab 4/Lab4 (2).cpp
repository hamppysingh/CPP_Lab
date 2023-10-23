/*1. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class.  */


#include<iostream>
#include<string>
using namespace std;

class Person{

    private:
        string name,city;
        int age;

    public:
    	Person(){
    		name="Happy";
    		age=21;
    		city="Pune";
		}
		Person(string name,int age,string city){
			this->name=name;
			this->age=age;
			this->city=city;
		}
		void display(){
            cout<<"\nName of the person is "<<name<<". His age is "<<age<<"  .He lives in "<<city;

        }
        void setName(string name)
		{
            this->name=name;
	    }
        void setAge(int age)
		{
            this->age=age;
		}
		void setCity(string city){
		    this->city=city;
        }
        string getName(){
           return name;
        }
        int getAge(){
        	return age;
		}
		string getCity(){
			return city;
		}
};
int main(){
    Person p("Mohit",33,"Bangalore");
    p.display();
    p.setName("Praveen");
    p.setCity("Bangalore");
    cout<<"\nAge of "<<p.getName()<<" is "<<p.getAge()<<" and he lives in "<<p.getCity()<<".";
    
	Person p1;
	p1.display();
    p1.setName("Zero");
    p1.setAge(25);
    p1.setCity("Delhi");
    cout<<"\nAge of "<<p1.getName()<<" is "<<p1.getAge()<<" and he lives in "<<p1.getCity()<<".";
    return 0;

}
