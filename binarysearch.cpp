#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
  int s=0,e=n;
  
  for(int i=0;s<=e;i++)
  {
    int mid=(s+e)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
        e=mid-1;
    }
    else 
    {
        s=mid+1;
    }
  }
  return -1;

}
int main()
{
    int n;
     cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
   
    cout<<"enter the array elements in sorted order"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key ;
    cout<<"enter the element you want to find"<<endl;
    cin>>key;
    int ans=binarysearch(arr,n,key);
    cout<<ans<<endl;
    return 0;
    
}