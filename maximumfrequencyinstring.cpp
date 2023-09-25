#include<iostream>
using namespace std;
int main()
{
   string s="ababebsbdb"; 
   int feq[26];

   for(int i=0;i<26;i++)
   feq[i]=0;
   for(int i=0;i<s.length();i++)
   feq[s[i]-'a']++;

   char ans ='a';
   int maxf=0;
   for(int i=0;i<26;i++)
   {
    if(feq[i]>maxf)
    {
        maxf=feq[i];
        ans = i+'a';
    }
   }
   cout<<maxf<<" "<<ans<<endl;
 return 0;
}