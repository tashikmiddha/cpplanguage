// METHOD NO 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter three numbers to find maximum"<<endl;
//     cin>>a>>b>>c;
//     if(a>b)
//     {
//         if(a>c)
//         {
//             cout<<"the maximum is "<<a;
//         }
//         else 
//         {
//            cout<<"the maximum is "<<c; 
//         }
//     }
//     else 
//     {
//         if(b>c)
//         {
//             cout<<"the maximum is "<<b;
//         }
//         else 
//         {
//             cout<<"the maximum is "<<c;
//         }
//     }
//     return 0;
// }




//METHOD NO 2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter three numbers to find maximum"<<endl;
//     cin>>a>>b>>c;
//     if(a>b && a>c)
//     {
//         cout<<"the maximum value is "<<a;
//     }
//     else if (b>a  && b>c)
//     {
//         cout<<"the maximum value is "<<b;
//     }
//     else
//     {
//      cout<< "the maximum value is "<<c;
//     }
    
    
//  return 0;
// }



// METHOD NO 3
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    
    cout<<"Enter three numbers to find maximum"<<endl;
    cin>>a>>b>>c;
    (a>b) ? (a>c) ? cout<<"the maximum value is "<<a : cout<<" the maximum value is  "<<c : (b>c) ? cout<<" the maximum value is  "<<b : cout<<"the maximum value is "<<c ;
    return 0;
}
