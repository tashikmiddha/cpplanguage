#include<iostream>
using namespace std;
int main()
{
    int saving;
    cout<<"enter your saving"<<endl;
    cin>>saving;
    if(saving>2000)// this is a conditional if else if we have two or more than two options
    {
        cout<<"i am going for shoping "<<endl;
    }
    else if (saving<=2000)
    {
       cout<<" not going for shoping"<<endl;
    }
    else 
    {
        cout<<"invalid number"<<endl;
    }
    return 0;
    
}