#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=(n-i+1);j++)
        {
            if(j<=(n-i))
            {
                cout<<" ";
            }
            else 
            {
              for (int k = 1; k <= i; k++)
              {
                cout<<k<<" ";
              }
              
            }
          
        }
        cout<<endl;
    }
    
}