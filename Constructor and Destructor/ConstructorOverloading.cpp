#include <iostream.h>
#include <conio.h>

class MyClass{
	public:
    int width;
    int height; 
	MyClass()
	{
		 cout<<"Defualt constructor called"<<endl; 
         width=0;
         height=0;
	}
    MyClass(int x)
	{
        cout<<"Constructor with one argument called"<<endl; 
		 width=x;
         height=x;
	}
    MyClass(int x, int y)
	{
        cout<<"Constructor with two arguments called"<<endl; 
		 width=x;
         height=y;
	}


	void getData()
	{
		cout<<"width:"<<width<<endl;
        cout<<"height:"<<height<<endl;
        cout<<height<<endl;
	}

};


void main()
{

	MyClass obj1(5); 
    MyClass obj2(3,6); 
	clrscr();
	
    obj1.getData();
    obj1.getData();
	//mybox.getWidth();
	printBox();
	getch();
}