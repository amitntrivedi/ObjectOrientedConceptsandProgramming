//Friend Class
//Here class b is a friend of class a
#include<iostream.h>
class B;
class A
{
int i;
public:
	void setdata(int x)
	{
	i=x;
	}
	friend class B;
};
class B
{
int j;
public:
	void setdata(int y)
	{
	j=y;
	}
void sum(A);
void multiply(A);
};
void B::sum(A aobj)
{
cout<<"Sum is "<<aobj.i+j;
}
void B::multiply(A aobj)
{
cout<<"\nProduct is "<<aobj.i*j;
}
void main()
{
A a1;
B b1;
a1.setdata(100);
b1.setdata(200);
b1.sum(a1);
b1.multiply(a1);
}

