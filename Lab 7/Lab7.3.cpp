/* 3:Create abstract class Fruit with abstract function taste
Create derived classes for Fruit:Apple,Mango,Orange
Implement abstract method in derived class ,add specific methods like juice(),jam(),pulp() in respective derived class(as discussed in lect);

create taster program.create fruit basket and invoke method
Use:dynamic_cast,typeid */

#include"Fruit.h"
#include<iostream>
using namespace std;
int main()
{   Fruit f;
    Orange o;
    Apple a;
    Mango m;
    Fruit *ptr=&o; //Parent=child...Static cast 
	ptr->taste();
    Fruit *basket[4];
    basket[0]=&f;
    basket[1]=&a;
    basket[2]=&m;
    basket[3]=&o;
    for(int i=0;i<4;i++)
    {
        basket[i]->taste();
        if(typeid(*basket[i])==typeid(Orange)){
            cout<<"Orange is in Basket."<<endl;
            Orange *Obj=dynamic_cast<Orange*>(basket[i]);
            Obj->juice();
        }
        if(typeid(*basket[i])==typeid(Mango)){
            cout<<"Mango is in Basket."<<endl;
            Mango *Obj=dynamic_cast<Mango*>(basket[i]);
            Obj->pulp();
        }
        if(typeid(*basket[i])==typeid(Apple)){
            cout<<"Apple is in Basket."<<endl;
            Apple *Obj=dynamic_cast<Apple*>(basket[i]);
            Obj->jam();
        }
    }
    return 0;
}