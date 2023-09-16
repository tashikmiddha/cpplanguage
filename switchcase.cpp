#include<iostream>
using namespace std;
// this program say hlo to you in differt languages
int main()
{
    char n;
    cout<<"enter any character from a,b,c"<<endl;
    cin>>n;
    switch(n)// this statement is used to create options type things
    {
        case 'a':
        cout<<"hello"<<endl;
        break;
        case 'b':
        cout<<"hola"<<endl;
        break;
        case 'c':
        cout<<"ciao"<<endl;
        break;
        default:
        cout<<"invalid entry"<<endl; // this execute when you give input other than a,b,c
        break; 

        return 0;
    }
}