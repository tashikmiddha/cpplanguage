#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
       for(int j=i;j<n;j++)
       {
        for(int k=i;k<=j;k++)
        {
        cout<<arr[k]<<" ";
       } 
       cout<<endl;}

    }
    return 0;
    
}