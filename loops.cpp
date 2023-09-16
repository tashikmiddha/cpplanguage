#include<iostream>
using namespace std ;
int main()
{
    int sum=0,n;
    cout<<"enter a number"<<endl;
    cin>>n;
   /* for(int i=1;i<=n;i++)// this is loop which is used to repeat some work 
    {
        sum=sum+ i;
    }
    int t=1;
    while(t<=n)
    {
      sum =sum +t;
      t++;
    }*/
    int t=1;
    do{
        sum= sum +t;
        t++;

    }while(t<=n);
    
    cout<<"the sum is "<<sum;
    return 0;
}