#include <iostream.h>
#include <conio.h>

class Circle
{
	public:
	void print()
	{
		cout<<"I am circle"<<endl;
	}

};

void main()
{
	Circle obj;
	Circle *pobj;
	pobj=&obj;
	pobj->print();
	getch();
}