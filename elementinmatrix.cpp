#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the row and column of the matrix"<<endl;
    cin>>n>>m;
    cout<<"enter the elements in the array"<<endl;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
       for(int j=0;j<m;j++)
       {
        cin>>arr[i][j];
       }
    }
    int x;
    cout<<"enter the element "<<endl;
    cin>>x;
    for (int i = 0; i < n; i++)
    {
       for(int j=0;j<m;j++)
       {
        if(arr[i][j]==x)
        {
            cout<<"element is in the matrix"<<endl;
            cout<<"in row "<<i<<" and column "<<j;
            return 0;
        }
       }
    }
    cout<<"element is not found in the matrix"<<endl;
    return 0;


    
}