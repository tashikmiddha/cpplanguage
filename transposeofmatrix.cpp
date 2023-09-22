#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the matrix size n*n "<<endl;
    cin>>n;
    cout<<"enter the elements of the array"<<endl;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
      for(int j=0;j<n;j++)
      {
        cin>>arr[i][j];
      }
    }
    for (int i = 0; i < n; i++)
    {
       for(int j=i;j<n;j++)
       {
        int temp =arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
       }
    }
      for (int i = 0; i < n; i++)
    {
      for(int j=0;j<n;j++)
      {
       cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
    return 0;
    
    
    
}