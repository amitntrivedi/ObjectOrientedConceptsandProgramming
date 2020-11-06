#include <iostream.h>
#include <conio.h>

class Box
{
	public:
	int width;
	void display()
	{
		cout<<"I am Box"<<endl;
	}
};



void main()
{
	clrscr();

	Box obj;
	cout<<"using object"<<endl;
	obj.display();

	Box *pobj;
	pobj=&obj;
	cout<<"using pointer to object:"<<endl;
	pobj->display();

	getch();

}