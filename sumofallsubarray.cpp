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
   
   int sum =0;
        for (int j = 0; j < n; j++)
        {
             sum =0;
            for (int i = j; i < n; i++)
            {
                sum = sum + arr[i];
                cout << sum<<endl;
            }
             
        }
    
   
    return 0;
}
