#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=new int();
    *ptr=10;
    delete(ptr);
    ptr=new int[4];
    delete []ptr;
    ptr =NULL;
    
 return 0;
}