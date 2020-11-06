#include <iostream.h>
#include <conio.h>
class Distance
{
    int feet; 
    int inch; 
    public: 
    void setData(int f, int i) 
    {
        feet=f; 
        inch=i; 
    }
    void getData() 
    {
        cout<<"Feet:" << feet<<endl;  
        cout<<"Inch:" << inch<<endl; 
    }
}; 

void printDist(Distance dist)
{
    dist.getData();
}

void main()
{
    Distance d1; 
    d1.setData(12,5); 
	clrscr();
    printDist(d1); 
	getch();
}
