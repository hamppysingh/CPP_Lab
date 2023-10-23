/*2. Create a class Date with data members as dd, mm, yy. Create AcceptDate function. Also add the display function.
Create the object of this class in main method and invoke all the methods in that class.
 */


#include<iostream>
#include<string>
using namespace std;

class Date{

    private:
        int dd,mm,yy;

    public:
        void accept(){
            year:
                cout<<"Enter the Year: ";
                cin>>yy;
                if(yy<=999||yy>=3000)
                {
                    cout<<"You entered invalid year...enter again!!!\n";
                    goto year;

                }

            month:
                cout<<"Enter the Month: ";
                cin>>mm;
                if(mm<1||mm>12)
                {
                    cout<<"You entered invalid month...enter again!!!\n";
                    goto month;

                }
            day:
                cout<<"Enter the Day: ";
                cin>>dd;
                if(dd<1||dd>31)
                {
                    cout<<"You entered invalid day...enter again!!!\n";
                    goto day;

                }

        }

        void display(){
            cout<<"Date is in day/month/year format : "<<dd<<"/"<<mm<<"/"<<yy;

        }
};
int main(){
    Date d;
    d.accept();
    d.display();

}
