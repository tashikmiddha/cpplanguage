#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "enter the row and column" << endl;
    cin >> r >> c;

    for (int i = 1; i <= r; i++)
    {
        if (i == 1 || i == r)
        {
            for (int j = 1; j <= c; j++)
            {
                cout << "*";
            }
            cout<<endl;
        }
        else{
            for(int k=1;k<=c;k++)
            {
                if(k==1 || k==c)
                {
                    cout<<"*";
                }
                else 
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}