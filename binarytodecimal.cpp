#include<iostream>
#include<math.h>
using namespace std;
void binary(int n)
{
    int a,b=0,sum=0;
  while(n>0)
  {
   a=n%10;
   if(a==1 || a==0){
   sum =sum + a*pow(2,b);
  b++;
  n=n/10;}
  else {
    cout<<"not a binary number"<<endl;

    exit(0);
  }
  }
  cout<<sum;
}

int main()
{
    int n;
    cout<<"enter the binary number "<<endl;
    cin>>n;
    string s;
    binary(n);
    return 0;
}