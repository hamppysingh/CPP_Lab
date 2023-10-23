/* 2:Create Employee class with members id(int),name(string),dob(Date).Use above created Date class.
Write default and parameterised constructor in Employee Class.
Write accept() function to accept information and display() to display emp information. */
#include<iostream>
using namespace std;
class Date{

    private:
        int dd,mm,yy;

    public:
    	Date(){
    		dd=26;
    		mm=9;
    		yy=2001;
		}
		Date(int yy,int dd,int mm){
			this->yy=yy;
			this->mm=mm;
			this->dd=dd;
		}
        
        void setYear(int yy){
                this->yy=yy;
		}
        void setMonth(int mm){
                this->mm=mm;    
    	}
       void setDay(int dd){
                this->dd=dd;
		}
		int getYear(){
			return yy;
		}
		int getMonth(){
			return mm;
		}
		int getDay(){
			return dd;
		}
        void display(){
            cout<<"Your Date is in day/month/year format : "<<dd<<"/"<<mm<<"/"<<yy;

        }
};
class Employee:public Date{
    int id;
    string name;
    public:
    Employee(){
        id=10;
        name="Raj";
    }   
    void accept(){
             cout<<"Employee id: ";
             cin>>id;
             cout<<"Employee name: ";
             cin>>name; 
        }
        Employee(int id,string name,int yy,int dd,int mm):Date(yy,dd,mm)
        {
            this->id=id;
            this->name=name;
        }
        void empdisplay(){
            cout<<"Employee id: "<<id<<" and name: "<<name<<" and ";
            Date::display(); 
            cout<<endl;
        }

};
int main()
{
    Employee E1,E2(56,"Praveen",1979,17,5);
    E2.accept();
    E1.empdisplay();
    E2.empdisplay();
    return 0;
}