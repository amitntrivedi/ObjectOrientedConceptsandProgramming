#include <iostream.h>
#include <conio.h>

class Shape
{
	public:
	void virtual 	draw()
	{
		cout<<"I am shape"<<endl;
	}
};

class Triangle : public Shape
{
	public:
	void draw()
	{
		cout<<"I am Traingle"<<endl;
	}
};

class Rectangle: public Shape
{
	public:
	void draw()
	{
		cout<<"I am Rectangle"<<endl;
	}
};


void main()
{
	clrscr();
	Shape *ps;
	Triangle t;
	Rectangle r;
	ps=&t;
	ps->draw();
	ps=&r;
	ps->draw();
	getch();
}