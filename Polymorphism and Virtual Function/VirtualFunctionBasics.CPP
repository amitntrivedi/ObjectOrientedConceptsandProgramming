#include <iostream.h>
#include <conio.h>

class Parent
{
	public:
	void virtual print()
	{
		cout<<"I am Parent"<<endl;
	}

};

class Child : public Parent
{
	public:
	void print()
	{
		cout<<"I am child"<<endl;
	}
};

void main()
{
	clrscr();
	Parent b;
	Child d;
	Parent *p;
	p=&d;
	p->print();
	p=&b;
	p->print();

	getch();
}