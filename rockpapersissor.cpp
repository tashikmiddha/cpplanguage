#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int n;
   
   
    
    int score =0,comp=0;
    while(1)
    {
    cout<<"enter the number"<<endl<<"1.rock"<<endl<<"2.paper"<<endl<<"3.scissor"<<endl<<"4.exit"<<endl;
    cin>>n;
    srand(time(NULL));
    int random= (rand()%3)+1;
    cout<<"you chose "<<n<<" the computer chose "<<random<<endl;
    if(n==random)
    {
     
    }
    else if((n==1 && random==3)||(n==2 && random==1)||(n==3 && random==2))
    {
        score++;
    }
    else if(n==4)
    {
        goto end;
    }
    else
    {
        comp++;
    }
    }

    end:
    cout<<"your score "<<score<<" computer score "<<comp<<endl;
    if(score>comp)
    {
        cout<<"you won the match"<<endl;
    }
    else if(score ==comp)
    {
        cout<<"draw"<<endl;
    }
    else{
        cout<<"you lose the match"<<endl;
    }
    
 return 0;
}