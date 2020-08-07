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

/*

DRY RUN

Step 1
(function call : printme  p1=34)
Step 7
p1=34
Step 9
(function return to main) 
Step 10 
(fucntion call p1=63)
Step 7
p1=63
Step 9
(function
*/