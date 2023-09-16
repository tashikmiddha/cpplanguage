#include<iostream>
#include<math.h>
using namespace std;
bool prime(int i)// this is a function with return type bool (0 or 1) which check the number is prime or not
{
  for (int j = 2; j < sqrt(i); j++)
  {
    if(i%j==0)
    {
        return false;
    }
    
  }
  return true;
  
}
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    for(int i=a;i<=b;i++)// this loop check between a and b how many numbers are prime  
    {
        if(prime(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}