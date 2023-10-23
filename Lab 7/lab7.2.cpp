/*2:Create Function Template and class template and use it*/
#include<iostream>
using namespace std;

template<class T> void Swap (T &a,T &b)
{
	T t=a;
	a=b;
	b=t;
}
template<class T> class myclass{
	public: T temp;
			myclass(T temp)
			{
					this->temp=temp;
			}
			void display(){
			cout<<"Value: "<<temp<<endl;
		}
};
int main(){
	
	int a1 = 10, a2 = 20;			//int swap
	cout<<"Before Swapping Int : I1: "<<a1<<" I2: "<<a2<<endl;
	Swap(a1,a2);
	cout<<"After Swapping Int : I1: "<<a1<<" I2: "<<a2<<endl;
	double d1 = 10.20, d2 = 20.20;	//double swap
	cout<<"Before Swapping Double : D1: "<<d1<<" D2: "<<d2<<endl;
	Swap(d1, d2);
	cout<<"After Swapping Double : D1: "<<d1<<" D2: "<<d2<<endl;
	char c1 = 'A', c2 = 'B';
	cout<<"Before Swapping Char : C1: "<<c1<<" C2: "<<c2<<endl;		//char swap
	Swap(c1, c2);
	cout<<"After Swapping Char : C1: "<<c1<<" C2: "<<c2<<endl;
	string s1 = "Praveen", s2 = "Kalpesh";	//string swap
	cout<<"Before Swapping String : S1: "<<s1<<" S2: "<<s2<<endl;
	Swap(s1,s2);
	cout<<"After Swapping String : S1: "<<s1<<" S2: "<<s2<<endl;
	cout<<"\n-----------------------\n";
	myclass<int> M(120);
	myclass<string> M1("Happy Engineers Day!!");
	M.display();
	M1.display();
	
	return 0;
}
