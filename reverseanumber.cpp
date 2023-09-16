#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    int reverse=0;
    while(n>0)
    {
        int lastnum=n%10;// this give the last digit of that number
        reverse =reverse*10 +lastnum; // from this we can reverse the number
        n=n/10;
    }
    cout<<reverse<<endl;
    return 0;

}