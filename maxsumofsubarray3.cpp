#include <iostream>
#include<climits>
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
    int currentsum =0;
    int maxsum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
      currentsum+=arr[i];
      if(currentsum<0)
      {
        currentsum=0;
      }
      maxsum=max(maxsum,currentsum);
    }
    cout<<maxsum;
    return 0;
    
}
