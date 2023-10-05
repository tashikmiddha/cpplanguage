#include<iostream>
using namespace std;
class ground{
   public:
   void fun()
   {
    cout<<"ground"<<endl;
   }
};
class base : public ground{
 public:
 void fun1()
 {
    cout<<"base"<<endl;
 }
};
int main()
{
    base a;
    a.fun();
    a.fun1();
 return 0;
}