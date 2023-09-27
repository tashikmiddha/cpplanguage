#include<iostream>
using namespace std;
void sum1( int n)
{
    int a;
    a=n*(n+1)/2;
    cout<<"by 1 method"<<endl;
    cout<<a<<endl;
}
void sum2(int n)
{
    int a=n;
    for (int i = 0; i < n; i++)
    {
      a=a+i; 
    }
    cout<<"by 2 method"<<endl;
    cout<<a<<endl;
}
int main()
{
    int n;
    cout<<"enter a  number"<<endl;
    cin>>n;
    sum1(n);
    sum2(n);
    return 0;
}