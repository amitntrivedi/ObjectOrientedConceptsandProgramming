#include <iostream>
using namespace std; 

class MyClass{
	public:
    int width;
    int height; 
	
    MyClass(int x, int y=0)
	{
	cout<<"Constructor with two arguments called"<<endl;
	 width=x;
	 height=y;
	}


	void getData()
	{
		cout<<"width:"<<width<<endl;
		cout<<"height:"<<height<<endl;
	}

};


int  main()
{
 
 
    MyClass obj1(5);
    MyClass obj2(3,6);


    obj1.getData();
    obj2.getData();
	return 0; 
}