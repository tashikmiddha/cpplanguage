#include <iostream>
#include <climits>
using namespace std;
void selectionsort(int arr[], int n)
{
   
    for (int j = 0; j < n-1; j++)
    {
        for (int i = j+1; i < n; i++)
        {
            if (arr[j]> arr[i])
            { 
               int temp=arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[n];

    cout << "enter the array elements in unsorted order" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}