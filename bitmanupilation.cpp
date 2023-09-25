#include<iostream>
using namespace std ;
int getbit(int n,int a)
{
    return ((n&(1<<a))!=0);
}
int setbit(int n,int a)
{
    return (n |(1<<a));
}
int clearbit(int n,int a)
{
  int mask=~(1<<a);
  return (n & mask);
}
int updatebit(int n,int pos,int value)
{
    int mask=~(1<<pos);
    n =n &mask;
    return n|(value<<pos);
}
int main()
{
    int n,a;
    //cout<<"enter the number and the place of bit  "<<endl;
    //cin>>n>>a;
    //cout<<getbit(n,a)<<endl;
    //cout<<setbit(n,a)<<endl;
    //cout<<clearbit(n,a)<<endl;
    cout<<updatebit(5,1,1)<<endl;

    return 0;
    
}
