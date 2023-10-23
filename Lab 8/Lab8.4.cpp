/* 4:Create a C++ program that does the following:
Initializes an empty vector of integers.
Asks the user to enter a series of integers and adds them to the vector until the user enters a specific sentinel value (e.g., -1).
Prints the elements of the vector.
Calculates and prints the sum and average of the values in the vector. */
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
    vector<int> a;
    int num;
    while(num!=-1)
    {   cout<<"Enter -1 for breaking or number for array : ";
        cin>>num;
        if(num>0)a.push_back(num);
    }
    for(int i=0;i<a.size();i++)
    {
        
    }
    int sum=accumulate(a.begin(),a.end(),0);
    double avg=static_cast<double>(accumulate(a.begin(),a.end(),0)/a.size());
    cout<<"Sum of array is: "<<sum<<endl;
    cout<<"Average of array is: "<<avg<<endl;
    return 0;
}