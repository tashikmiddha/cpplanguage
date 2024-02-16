//print a set in cpp
// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
//     set<int> s;
//     s.insert(1);
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
    // s.erase(2);
    // s.erase(s.begin());
//     for(auto i:s)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     for(auto i=s.begin();i!=s.end();i++)
//     {
//         cout<<*i<<" ";
//     }
//     cout<<endl;
//  return 0;
// }

//print reverse set in cpp
// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
//     set<int> s;
//     s.insert(1);
//      s.insert(1);
//      s.insert(2);
//      s.insert(3);
//      for(auto i=s.rbegin();i!=s.rend();i++)
//      {
//         cout<<*i<<" ";
//      }
//      cout<<endl;
//      cout<<s.size();
//  return 0;
// }

//using custam camparator
// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
//     set<int,greater<int>>s;
//      s.insert(1);
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);

//     for(auto i:s)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//  return 0;
// }

//multiset in cpp
// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
//     multiset<int>s;
//     s.insert(1);
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     //s.erase(1);
//     s.erase(s.find(1));
//     for(auto i:s)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//  return 0;
// }


//unordered set
#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(5);
    s.insert(3);
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
 return 0;
}