/* 2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. */


#include<iostream>
#include<string>
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
            cout<<"Your changed Date is in day/month/year format : "<<dd<<"/"<<mm<<"/"<<yy;

        }
};
int main(){
    Date d1,d2(1976,30,7);
    int dd,yy,mm;
    cout<<"\nYour Default Date is in day/month/year format : "<<d1.getDay()<<"/"<<d1.getMonth()<<"/"<<d1.getYear();
    year:
    	cout<<"\nEnter the year : ";
    	cin>>yy;
    	if(yy<=999||yy>=3000)
        {
            cout<<"You entered invalid year...enter again!!!\n";
            goto year;

        }
    d1.setYear(yy);
    	
    month:
    	cout<<"\nEnter the month : ";
    	cin>>mm;
    	if(mm<1||mm>12)
        {
            cout<<"You entered invalid month...enter again!!!\n";
            goto month;
		}
    d1.setMonth(mm);
	day:
    	cout<<"\nEnter the day : ";
    	cin>>dd;
    	if(dd<1||dd>31)
        {
            cout<<"You entered invalid day...enter again!!!\n";
            goto day;
		}
    d1.setDay(dd);
	d1.display();		
    cout<<"\nDate Provided by parameterized constructor is in day/month/year format : "<<d2.getDay()<<"/"<<d2.getMonth()<<"/"<<d2.getYear();
	return 0;
}
