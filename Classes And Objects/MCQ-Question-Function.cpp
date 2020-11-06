What is the output of the below program?
#include <iostream.h>
#include <conio.h>

void  printme(int p1)   
{
	cout<<" Number="<<p1 <<endl;
}

void main()
{
	clrscr();
	printme(24);
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


