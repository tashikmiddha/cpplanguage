#include <iostream>
using namespace std;
void sorting(int arr[], int n)
{

    for (int i = 0; i < n-1; i++)
    {
        for(int j= i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    
}
bool binarysearch(int arr[], int n, int key)
{

int i=0,e=n;
for(int j=0;i<=e;j++)
{
    int mid =(i+e)/2;
if(arr[mid]==key)
{
    return 1;
}
else if(arr[mid]>key)
{
 e=mid-1;
}
else if(arr[mid]<key)
{
    i=mid+1;
}
}
return 0;


}

int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "enter the element you want to search" << endl;
    cin >> key;
    sorting(arr, n);
    if(binarysearch(arr, n, key))
    {
        cout<<"the element is in the array"<<endl;
    }
    else 
    {
      cout<<"the element is not in the array"<<endl;  
    }
    return 0;
}