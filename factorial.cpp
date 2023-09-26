#include<iostream>
using namespace std;
void factorial(int n)
{
    int ans=n;
    for (int i = 2; i < ans; i++)
    {
       n=n*i;
    }
    cout<<n;
    
}

int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    factorial(n);
    return 0;

}