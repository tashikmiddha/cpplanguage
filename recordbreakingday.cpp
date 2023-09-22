#include<iostream>

using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[n];
    }
    int ans=0,mx=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>mx && a[i]>a[i+1])
        {
            ans++;
        }
        mx=max(mx,a[i]);
    }
    cout<<ans<<endl;
 return 0;
}