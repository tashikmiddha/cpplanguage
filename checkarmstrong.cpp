#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    int sum =0;
    int org =n;
    while(n>0)
    {
      int last=n%10;
      sum += pow(last,3);
      n=n/10;

    }
    if(sum==org)
    {
        cout<<"the number is armstrong"<<endl;
    }
    else 
    {
        cout<<"the number is not armstrong"<<endl;
    }

    return 0;
}