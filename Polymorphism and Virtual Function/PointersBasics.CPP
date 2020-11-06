#include <iostream.h>
#include <conio.h>




void main()
{
	clrscr();
	int count=34;
	int *pcount;
	pcount=&count;
	cout<<"Count"<<count<<endl;
	cout<<"Count using Pointer"<<*pcount<<endl;
	cout<<"address of count " <<pcount<<endl;
	getch();

}