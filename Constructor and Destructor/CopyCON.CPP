#include <iostream>
using namespace std; 

class Box{
	int width;
	public:
	Box()
	{
		width=0;
	}

	Box(Box &b)     //Copy Constructor
	{
		width=b.width+5;
	}
	void setWidth(int x)
	{
		width=x;
	}

	void getWidth()
	{
		cout<<width<<endl;
	}

};


int  main()
{

	Box mybox;
	
	mybox.setWidth(10);
	Box newBox = mybox; 
	newBox.getWidth();
	
	return 0; 
}