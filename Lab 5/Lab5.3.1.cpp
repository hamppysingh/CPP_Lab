/* 3:Consider that payroll software needs to be developed for computerization of
operations of an ABC organization. The organization has employees.
3.1. Construct a class Employee with following members using private access
specifies:
 Employee Id integer
 Employee Name string
 Basic Salary double
 HRA double
 Medical double=1000
 PF double
PT double
 Net Salary double
 Gross Salary double
Please use following expressions for calculations://Note:Don't accept HRA,PF PT from user
 * HRA = 50% of Basic Salary
* PF = 12% of Basic Salary
* PT = Rs. 200

3.2. Write methods to display the details of an employee and calculate the gross
and net salary.
* Goss Salary = Basic Salary + HRA + Medical
* Net Salary = Gross Salary – (PT + PF)

Create Object of employee class and assign values and display Details.*/

#include<iostream>
using namespace std;

class Employee {
	private:
		int empId;
		string name;
		double basicSal,hra,pf,netSal,grossSal;
		double pt,med;
			
		
		
		
	public:
		
		Employee(){
			empId=101;
			name="Raj";
			basicSal=10000;
			pt=200;
			med=1000;
		}
		
		Employee(int empId,string name,double basicSal){
			this->empId=empId;
			this->name=name;
			this->basicSal=basicSal;
			pt=200;
			med=1000;
		}
		void calculate(){
			hra=basicSal*50/100.0;			//5000
			pf=basicSal*12/100.0;			//1200
			
		    grossSal=basicSal+hra+med;		//10000+5000+1000=16000
			netSal=grossSal-pt-pf;				//14600
			
		}	
		void display(){
			calculate();
			cout<<"\n\n   Employee detail\n";
			cout<<"------------------------------------------------------------\n";
			cout<<"Employee ID: "<<this->empId<<"\nEmployee Name: "<<this->name<<"\nNet Salary is "<<this->netSal;
						
		}
};

  int main(){
  	
  	
  	Employee emp;
  	//emp.calculate();
  	emp.display();
  	
  	Employee e(128,"Kalpesh",100000);
  	//e.calculate();
  	e.display();
  	
  	int empId;
  	string name;
  	double basicSal;
  	cout<<"\n \nEnter Employee ID :\n";
  	cin>>empId;
  	cout<<"EMployee name \n";
  	cin>>name;
  	cout<<"Basic SAlary \n";
  	cin>>basicSal;
  	
  	Employee em(empId,name,basicSal);
  	em.display();
  }
