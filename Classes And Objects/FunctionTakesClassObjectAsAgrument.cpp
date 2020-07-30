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
    void getData(int f, int i) 
    {
        cout<<"Feet:" << feet<<endl; 
        cout<<"Inch:" << inch<<endl; 
    }
}; 

void printDist(Distance dist)
{
    cout<<"Number given to display is: "<<x<<endl; 
    dist.getData();
}

void main()
{
    Distance d1; 
    d1.setData(12,5); 
	clrscr();
    cout<<"Function takes class object as agurment "<<endl;
    printDist(d1); 
	getch();
}
