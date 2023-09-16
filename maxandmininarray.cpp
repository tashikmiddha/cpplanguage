#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the array size"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxi=INT_MIN;// this is a min number that can exist in 64 bit articheture
    int mini=INT_MAX;// this is a max number that can exist in 64 bit articheture

    for (int i = 0; i < n; i++)
    {
       maxi= max(maxi,arr[i]);//this is pre defined  function in cliits header file which check max out of two numbers 
       mini=min(mini,arr[i]);//this is pre defined  function in cliits header file which check min out of two numbers 

    }
    cout<<"the maximum value is "<<maxi<<" and the minimum value is "<<mini<<endl;
    return 0;
    
    
}