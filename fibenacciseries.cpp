#include<iostream>
using namespace std;
void fibenacci(int n)
{
     int t=0,x=1,z=0;
  for(int i=1;i<=n;i++)
  {
   
    if(i==1)
    {
        cout<<t<<endl;
    }
    else if(i==2)
    {
        cout<<x<<endl;
    }
    else 
    {
        z =x +t;
      cout<<x+t<<endl;
       t=x;
       x=z;
      
    }
   
    
  }  
}

int main()
{
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    fibenacci(n);
    return 0;
}