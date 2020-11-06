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
 
	~Box()
	{
		cout<<"I am destructor"<<endl;
	}

	void getWidth()
	{
		cout<<width<<endl;
	}

};


void main()
{

	{
		Box b1;
	}
	Box b1;
}