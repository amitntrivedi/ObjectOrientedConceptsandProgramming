#include <iostream.h>
#include <conio.h>



void display ()   
{
    cout<<" I am display function" <<endl; 

}

void printNum(int x)
{
    cout<<" number given to display is: "<<x<<endl; 
}

void printNum(int x, int y)
{
    count<< "I can display two number"<< endl; 
    cout<<" first number passed is: "<<x<< endl; 
    cout<<" second number passed is: "<<y<< endl; 
}

void printNum(int x, int y, int z)
{
    count<< "I can display three number"<< endl; 
    cout<<" first number passed is: "<<x<< endl; 
    cout<<" second number passed is: "<<y<< endl; 
    cout<<" second number passed is: "<<z<< endl; 
}

void printsum(int x, int y )
{
    int z; 
    z= x +y; 
    count<< "Sum"<< endl; 
    cout<<" first number passed is: "<<x<< endl; 
    cout<<" second number passed is: "<<y<< endl; 
    cout<<" Sum  is: "<<z<< endl; 
}

int sum(int x, int y )
{
    int z; 
    z= x +y; 
    return z; 
 }


int increment(int x )
{
   int y; 
   y=x+1; 
   return y;    
    
}

void main()
{
	cout<<"Hello"<<endl;
	getch();
}



