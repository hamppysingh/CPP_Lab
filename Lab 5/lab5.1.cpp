#include<iostream>
using namespace std;

class Date{
	private:
		int dd,mm,yyyy;
    
	public:
		Date(){
			cout<<"---------Default constructor\n";
			this->dd=1;
			this->mm=8;
			this->yyyy=1999;
		}	
		
		Date(int dd,int mm,int yyyy){
			cout<<"---------Parameterized const\n";
			this->dd=dd;
			this->mm=mm;
			this->yyyy=yyyy;
		}
		
		void display(){
			cout<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
		}	
	
};
int main(){
	Date d;
	d.display();
	
	Date dd(13,9,2023);
	dd.display();
}
