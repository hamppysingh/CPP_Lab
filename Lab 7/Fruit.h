#include<iostream>
using namespace std;

class Fruit{
    public: virtual void taste(){
        cout<<"No taste......"<<endl;
    } 
};
class Apple:public Fruit{
	public :void jam(){
		cout<<"Create Jam From Apple"<<endl;
	}
	void taste(){
		cout<<"  Apple Taste Sweet "<<endl;
	}
};
class Mango:public Fruit{
	
	public :void pulp(){
		cout<<"Mango Pulp get Created..."<<endl;
	}
	void taste(){
		cout<<"  Mango Taste Sweet "<<endl;
	}
};
class Orange:public Fruit{
	
	public :void juice(){
		cout<<"Orange Juice ....."<<endl;
	}
	void taste(){
		cout<<"  Orange Taste Sweet  and sour"<<endl;
	}
};
