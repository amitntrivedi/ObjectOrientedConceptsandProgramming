#include <iostream>
using namespace std; 

int myFun(int x, int y=10)
{
    return x+y; 
}

int main()
{
    int a=5; 
    int b=3; 
    int c; 
    int d; 

    c=myFun(a); 
    d=myFun(a,b); 
    cout<<"c: "<<c<<endl; 
    cout<<"d: "<<d<<endl; 

    return 0; 
}