#include<iostream>
using namespace std;
int main()
{
    int i=1,j=2;
        // 1 2    1     2      3     4
    cout<<i +j + i++ + j++  + ++i + ++j <<endl;
    cout<< "value of i is  "<<i<< " and value of j is "<<j;

    
 return 0;
}