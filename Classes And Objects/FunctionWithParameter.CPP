#include <iostream.h>
#include <conio.h>

void  printme(int p1)   // p1 formal argument
{
	cout<<"Step 7"<<endl;
	cout<<" p1="<<p1 <<endl;
	cout<<"Step 9"<<endl;
}

void main()
{
	clrscr();
	cout<<" Step 1"<<endl;
	printme(34);                     //actual argurment
	cout<<" Step 10"<<endl;
	printme(63);
	cout<<"Step 12"<<endl;
	getch();

}