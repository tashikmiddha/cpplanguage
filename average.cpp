#include<iostream>
using namespace std;
void average(int a,int b) // this is a function whose return type is void and take two integers as input
{
    cout<<"the averaage is "<<(a+b)/2;
}
int main()
{
    int a,b;//a and b are variables whose datatype is integer
    cout<<"enter two numbers "<<endl;
    cin>>a>>b; // this is a predefined function which take input from the user here we take two inputs a and b
    average(a,b); // this is called calling to a function 
    return 0;

}