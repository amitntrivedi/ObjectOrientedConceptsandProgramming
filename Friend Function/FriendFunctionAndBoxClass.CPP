#include <iostream>
using namespace std; 

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
	cout<< "Width from display function:"<< obj.width<<endl;

}

int main()
{

	Box mybox;
	
	cout<<"Box Program"<<endl;

	mybox.setData(20); //erro
	mybox.getData();

	display(mybox);
	return 0; 
}