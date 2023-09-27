#include<iostream>
using namespace std;
void towerofhanoi(int n,char sor,char dest,char help)
{
    if(n==0)
    {
        return;
    }
    towerofhanoi(n-1,sor,help,dest);
    cout<<"move the "<<sor<<" to the "<<dest<<endl;
    towerofhanoi(n-1,help,dest,sor);
}
int main()
{
    towerofhanoi(3,'A','C','B');

 return 0;
}