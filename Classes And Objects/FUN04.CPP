#include <iostream.h>
#include <conio.h>

void printNum(int x, int y)
{
	cout<<"Step 1"<<endl;
	cout<<"Nummber given is "<<x<<endl;
	cout<<"Step 9"<<endl;
	cout<<"second Number given is "<<y<<endl;
}

int addnum(int x, int y)
{
	int z;
	cout<<"Welcome to Add Num"<<endl;
	cout<<"First Number :"<<x<<endl;
	cout<<"Second Number :"<<y<<endl;
	z=x+y;
	cout<<"Value of z(temp):"<<z<<endl;
	return z;

}

void main()
{
	clrscr();
	cout<<"Step 5"<<endl;
	printNum(32,22);

	cout<<"Step 23"<<endl;
	getch();
}

