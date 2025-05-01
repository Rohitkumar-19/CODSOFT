#include<iostream>
using namespace std;
int main()
{
    double n1,n2,result;
    char op;
    cout<<"***** SIMPLE CALCULATOR *****";
    cout<<"\n";
    cout<<"Enter 1st number: ";
    cin>>n1;
    cout<<"chose any operator (+ - / *): ";
    cin>>op;
    cout<<"Enter 2nd number: ";
    cin>>n2;
    cout<<"\n";
    switch(op){
        case '+':
        result=n1+n2;
        cout<<"Result:- ("<<n1<<op<<n2<<":="<<result<<")";
        break;
        case '-':
        result=n1-n2;
        cout<<"Result:- ("<<n1<<op<<n2<<":="<<result<<")";
        break;
        case '*':
        result=n1*n2;
        cout<<"Result:- ("<<n1<<op<<n2<<":="<<result<<")";
        break;
        case '/':
        if(n2!=0){
            result=n1/n2;
        cout<<"Result:- ("<<n1<<op<<n2<<":="<<result<<")";
        }else{
            cout<<"Error Please change 2nd number other than '0'";
        }
        break;
        default:
        cout<<"Invalid oprator";    
    }
    return 0;
}