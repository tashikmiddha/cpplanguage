// METHOD NO 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"enter a number "<<endl;
//     cin>>a;
//     if(a%2==0)
//     {
//         cout<<"even number"<<endl;

//     }
//     else
//     {
//         cout<<"odd number";
//     }
//     return 0;
// }



// METHOD NO 2
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a number "<<endl;
    cin>>a;
    (a%2==0)? cout<<a<<" is a even number" : cout<<a<<" is a odd number";// by using ternary operators we can do things like if else condition
    return 0;
}