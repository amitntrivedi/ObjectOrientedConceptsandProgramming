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
	friend void display(Box );
};

void display(Box obj)       //non member function
{
	cout<<"I can dipslay anything"<<endl;
	cout<< "width from display function:"<< obj.width<<endl;

}

void main()
{

	Box mybox;
	clrscr();
	cout<<"Box Program"<<endl;

	mybox.setData(20); //erro
	mybox.getData();

	display(mybox);
	getch();
}