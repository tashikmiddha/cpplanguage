#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="sagfdifnsdebgf";
   /* for (int i = 0; i < s.length(); i++)
    {
       if(s[i]>='a' && s[i]<='z')
       {
        s[i]-=32;
       }
    }
    cout<<s<<endl;
     for (int i = 0; i < s.length(); i++)
    {
       if(s[i]>='a' && s[i]<='z')
       {
        s[i]+=32;
       }
    }
    cout<<s;*/
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;


   
    
    
}