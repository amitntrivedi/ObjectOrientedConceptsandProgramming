#include <iostream.h>
#include <conio.h>

class Box{
	int width;
	public:
	Box()
	{
		cout<<"I am constructor"<<endl;
		width=15;
	}

	Box(Box &b)
	{
		width=b.width+5;
	}
	void setWidth(int x)
	{
		width=x;
	}
	~Box()
	{
		cout<<"I am destructor"<<endl;
	}

	void getWidth()
	{
		cout<<width<<endl;
	}

};

void printBox()
{
	Box b1;
	Box b2(b1);
	b1.getWidth();
	b2.getWidth();
	return;
}

void main()
{

	Box mybox;
	clrscr();
	//mybox.setWidth(10);
	//mybox.getWidth();
	printBox();
	getch();
}