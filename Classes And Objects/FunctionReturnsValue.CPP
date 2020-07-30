#include <iostream.h>
#include <conio.h>

int addten(int x)
{
    int temp=0;
    temp = x +10;
    return  temp;
}

void main()
{
    int num=25;
    int result=0;
    clrscr();
    cout<<"Function takes arument and return value"<<endl;
    cout<<"Result Before : "<<result<<endl;
    result =  addten(num);
    cout<<"Result After : "<<result<<endl;
    getch();
}
