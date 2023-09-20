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
    int curr[n+1];
    curr[0]=0;
    int maxsum=INT_MIN;
    for (int i = 1; i <=n; i++)
    {
      curr[i]=curr[i-1]+arr[i-1];
    }
    for (int i = 1; i <= n; i++)
    {
       int sum =0;
       for(int j=0;j<i;j++)
       {
        sum = curr[i]-curr[j];
         maxsum=max(maxsum,sum);
       }
       
    }
    cout<<maxsum;
    
    return 0;
}
