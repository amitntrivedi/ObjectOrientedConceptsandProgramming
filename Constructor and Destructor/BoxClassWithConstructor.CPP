#include <iostream.h>
#include <stdio.h>

class Box{
	int width;
	public:
	void setWidth(int x)
	{
		width=x;
	}
	Box()
	{
		cout<<"I am constructor"<<endl;
		width=15;
	}

	void getWidth()
	{
		cout<<width<<endl;
	}

};

void main()
{

	Box mybox;
 	mybox.getwidith();
	getch();
}