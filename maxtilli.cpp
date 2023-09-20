#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array"<<endl;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int max=arr[0];
    for(int j=1;j<=n;j++){
    for(int i=0;i<j;i++)
    {
      if(arr[i]>max)
      {
        max=arr[i];
      }
    }
    cout<<max<<endl;
    }
    
    return 0;
    
}