#include<iostream>
using namespace std;
int main()
{
    int poc=3000;
    for (int i = 1; i <=30; i++)
    {
      
      if(i%2==0)
      {
        continue; // this is use to skip only one iteration 
      }
      if(poc==0)
      {
        break; // this will break the loop and go to end of the program
      }
      cout<<"go out today on day "<<i<<endl;
      poc-=300;
    }
    return 0;
    
}