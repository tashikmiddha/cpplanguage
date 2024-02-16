#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    for (int i = 2; i <= sqrt(n); i++)
    {
       if(n%i==0)
       {
        cout<<"not a prime number"<<endl;
       return 0;
       }
    }
    cout<<"prime number"<<endl;
    return 0;
    
}