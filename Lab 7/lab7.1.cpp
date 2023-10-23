//1:Create class for Handling Exception for Student
//Create StudentException class;
//Create Student class with data members (rollno,name,age)
//at the time of student creation check age if age<18 then throw exception
#include<iostream>
using namespace std;

class StudentException{
	int rollno,age;
	string name;
	public:
		void createstudent(){
			cout<<"Enter Roll No: "<<endl;
			cin>>rollno;
			cout<<"Enter Student Name: "<<endl;
			cin>>name;
			cout<<"Enter Age: "<<endl;
			cin>>age;
		}
		int getAge()
		{
		return age;
		}
};
int main()
{
	StudentException S;
	S.createstudent();
	try{
		if(S.getAge()<18)
		{
			throw S.getAge();
		}
		else{
			cout<<"Student created successfully"<<endl;
		}
	}catch(int age)
	{
		cout<<"Sorry you are Under 18!!";	
	}	
	return 0;
}
