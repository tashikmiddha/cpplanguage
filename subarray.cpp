#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of the array " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements in the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum=0;
    for(int k=0;k<n;k++)
    {
        for (int i = k; i < n; i++)
        {
          sum = sum +arr[i] ;
          cout <<sum<<endl;
        }
        sum =0;
        
    }
    return 0;
}