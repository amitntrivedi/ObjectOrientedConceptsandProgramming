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
}; 

Distance addtwoFeet(Distance dist)
{
    Distance temp;
    temp.feet= dist.feet +2 ; 
    temp.inch = dist.feet; 
    return temp;    
}

void main()
{
    Distance d1; 
    d1.setData(12,5); 
	clrscr();
    cout<<"Function takes object as arument and return objects as value"<<endl;
    cout<<"Result Before : "<<endl;
    d1.getData(); 
    result =  addOneFeet(d1);
    cout<<"Result After : "<<endl;
    result.getData(); 
	getch();
}
