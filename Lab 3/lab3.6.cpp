/*Create a class Book with data members as bname,id,author,price. Write AcceptBook function . Also add the display function.
Create Default and Parameterized constructors. Create the object of this class in main method and invoke all the methods in that class.*/

#include<iostream>
#include<string>
using namespace std;

class Book{
  private:
  int id,price;
  string author,bname;
  public:
  Book(int ID,int PRICE,string Author,string BNAME){
    id=ID;
    price=PRICE;
    author=Author;
    bname=BNAME;
  }
  Book(){

     cout<<"id:";
     cin>>id;
     cout<<"Price:";
     cin>>price;
     cout<<"Author:";
     cin>>author;
     cout<<"BookName:";
     cin>>bname;
  }
  void display(){
      cout<<"\nBook ID is "<<id<<" and name is "<<bname<<" written by "<<author<<" only of Rs. "<<price;
  }
};
int main(){
    Book b1;
    b1.display();
    Book b2(101,935,"Randy Connolly & Richardo Hoar","Fundamentals of WebDev");
    b2.display();
    return 0;
}
