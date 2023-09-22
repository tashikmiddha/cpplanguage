#include<iostream>
using namespace std ;
int main()
{
    int n,m;
    cout<<"enter the size of the array n*m"<<endl;
    cin>>n>>m;
    int mat[n][m];
    cout<<"enter the elements of the array"<<endl;
     for (int i = 0; i < n; i++)
    {
       for(int j=0;j<m;j++)
       {
        cin>>mat[i][j];
       }
    }
    
    int target;
    cout<<"enter the element you want to find"<<endl;
    cin>>target;

 int r=0,c=m-1;
 bool found =false;
 while(r<n && c>=0)
 {
    if(mat[r][c]==target)
    {
        found=true;
    }
    if(mat[r][c]>target)
    {
        c--;
    }
    else
    {
       r++; 
    }
 }
 if(found)
 {
    cout<<"element is found";

 }
 else{
    cout<<"element does not exist";
 }
 return 0;
}