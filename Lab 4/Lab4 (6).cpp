/*3. Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. */

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
  void setId(int id){
  	this->id=id;
  }
  void setPrice(int price){
  	this->price=price;
  }
  void setAuthor(string author){
  	this->author=author;
  }
  void setBname(string bname){
  	this->bname=bname;
  }
  int getId(){
  	return id;
  }
  int getPrice()
  {
  	return price;
  }
  string getAuthor()
  {
  	return author;
  }
  string getBname()
  {
  	return bname;
  }
  void display(){
      cout<<"\nBook ID is "<<id<<" and name is "<<bname<<" written by "<<author<<" only of Rs. "<<price;
  }
};
int main(){
    Book b1;
    int id,price;
    string bname,author;
    b1.display();
    cout<<"\nEnter the changed id:";
    cin>>id;
    b1.setId(id);
    cout<<"Enter the changed Price:";
    cin>>price;
    b1.setPrice(price);
    cout<<"Enter the changed Author:";
    cin>>author;
    b1.setAuthor(author);
    cout<<"Enter the changed BookName:";
    cin>>bname;
	b1.setBname(bname);
	cout<<"\nChanged Book ID is "<<b1.getId()<<" and name is "<<b1.getBname()<<" written by "<<b1.getAuthor()<<" only of Rs. "<<b1.getPrice();
    Book b2(101,935,"Randy Connolly & Richardo Hoar","Fundamentals of WebDev");
    b2.display();
    return 0;
}
