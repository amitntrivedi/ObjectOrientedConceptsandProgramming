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
    void getData( ) 
    {
        cout<<"Feet:" << feet<<endl; 
        cout<<"Inch:" << inch<<endl; 
    }
}; 

 

void main()
{
    Distance d1, d2; 
    d1.setData(12,5); 
    d2.setData(5,2); 
	clrscr();
    cout<<"Distance class demo"<<endl;
    cout<<"d1"<<endl;
    d1.getData(); 
    cout<<"d2"<<endl;
    d2.getData(); 
    getch();
}
