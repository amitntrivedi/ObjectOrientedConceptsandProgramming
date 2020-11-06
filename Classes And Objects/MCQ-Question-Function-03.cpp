What is the output of the below program?
#include <iostream.h>
#include <conio.h>

int   multiply(int a, int b)   
{
	int x;
    x=a*b; 
    return x; 
}

void main()
{
	int result; 
    clrscr();
	result=multiply(8,3);
    cout<<"answer "<<result<<endl; 
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


