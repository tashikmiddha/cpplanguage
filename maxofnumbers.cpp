#include<iostream>
using namespace std;
int main()
{
 int i,arr[i],x;
 cout<<"How many numbers you want to compare and find the maximum value in it "<<endl;
 cin>>i;
 for(int j=0;j<i;j++)
 {
    cin>>arr[j];
 }
 x=arr[0];
 for(int y=0;y<i;y++)
 {
    if(arr[y]>x)
    {
        x=arr[y];
    }
    else 
    {

    }
 }
 cout<<"The maximum value is "<<x;
 return 0;
}
