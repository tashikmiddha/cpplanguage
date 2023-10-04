// #include<iostream>
// using namespace std;
// // function overloading
// class student{
// public:
// void fun()
// {
//     cout<<"i am a function with no argument"<<endl;
// }
// void fun(int x)
// {
//    cout<<"i am a function with int argument"<<endl;
// }
// void fun(double x)
// {
//     cout<<"i am a function with double argument"<<endl;
// }
// };
// int main()
// {
//     student a;
//     a.fun();
//     a.fun(4);
//     a.fun(9.2);
//  return 0;
// }



// #include<iostream>
// using namespace std;
// // operator overloading
// class  complex{
// private:
// int real,img;
// public:
// complex(int r=0,int i=0)
// {
//     real=r;
//     img=i;
// }
// complex operator + (complex const &obj)
// {
//    complex res;

//    res.img =img +obj.img; 
//    res.real=real +obj.real;
//    return res;
// }
// void display()
// {
//     cout<<real <<" + i"<<img<<endl;
// }

// };
// int main()
// {
//     complex c1(12,7),c2(6,7);
//     complex c3=c1+c2;
//     c3.display();
//  return 0;
// }


#include<iostream>
using namespace std;
// runtime
class base
{
    public:
     virtual void print()
    {
        cout<<"this is a base class"<<endl;
    }
     virtual void display()
    {
        cout<<"this is the base class display function"<<endl;
    }
};
class derived :public base{
public:
 void print()
    {
        cout<<"this is a derived class"<<endl;
    }
    void display()
    {
        cout<<"this is the derived class display function"<<endl;
    }
};
int main()
{
    base *baseptr;
    derived r;
    baseptr =&r;
    baseptr-> print();
    baseptr -> display();
 return 0;
}