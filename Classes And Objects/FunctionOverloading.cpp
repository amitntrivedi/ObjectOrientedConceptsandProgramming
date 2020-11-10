#include <iostream>
using namespace std; 

int myFun(int x )
{
    cout<<"Function with one argument  called"<<endl; 
    return x; 
}
int myFun(int x, int y)
{
    cout<<"Function with two arguments  called"<<endl; 
    return x+y; 
}

int main()
{
    int a=5; 
    int b=3; 
    int c; 
    int d; 
    c=myFun(a); 
    cout<<"c: "<<c<<endl; 
    d=myFun(a,b); 
    cout<<"d: "<<d<<endl; 
    return 0; 
}