#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int num =rand()%100+1;
    int gues;
    cout<<"***** NUMBER GUSESSING GAME *****";
    cout<<"\n";
    cout<<" Guess Number between 1 to 100:= ";
    do{
        cin>>gues;
        if(gues<num){
            cout<<"Too low. Try again:";
        }else if(gues>num)
        {
            cout<<" Too high. Try again:";
        }else{
            cout<<"\n";
            cout<<"-:Nice You Guess Correct Number:-";
        }
    }while (gues!=num);
    return 0;
}