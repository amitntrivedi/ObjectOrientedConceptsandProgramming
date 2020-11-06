#include <iostream.h>
#include <stdio.h>

class Box{
	int width;
	public:
	void setWidth(int x)
	{
		width=x;
	}

	void getWidth()
	{
		cout<<width<<endl;
	}

};

void main()
{

	Box mybox;
	mybox.setWidth(10);
	mybox.getwidith();
	getch();
}