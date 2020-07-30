#include <iostream.h>
#include <conio.h>

class Box
{
	int width; //private
	public:
	void setData(int w)
	{
		width=w;
	}
	void getData()
	{
		cout<<"width:" <<width;
	}

};


void main()
{
	Box mybox;
	clrscr();
	cout<<"Box Program"<<endl;

	mybox.setData(20); 
	mybox.getData();


	getch();
}