#include<iostream>
using namespace std;
class student{
    string name;
    public:

    
    int age;
    bool gender;
    void printinfo()
    {
    cout<<"name = "<<name<<endl;
    cout<<"age = "<<age<<endl; 
    cout<<"gender = "<<gender<<endl;
    }
    void setname(string s)
    {
        name =s;
    }

};
int main()
{
    // student a;
    // a.name="tashik";
    // a.age=18;
    // a.gender=0;
    student arr[3];
    for(int i=0;i<3;i++)
    {
        string s;
        cout<<"name = ";
        cin>>s;
        arr[i].setname(s);
        cout<<"age = "; 
        cin>>arr[i].age;
        cout<<"gender = ";
        cin>>arr[i].gender;
    }
    for(int i=0;i<3;i++)
    {
        arr[i].printinfo();
    }
 return 0;
}