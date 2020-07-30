//An Example of a member function of a class which is a friend function of another class
//Class b is a friend of Class a
#include<iostream.h>
class a;
class b
{
int j;
public:
	void setdata(int y)
	{
	j=y;
	}
	void sum(a);
};
class a
{
int i;
public:
	void setdata(int x)
	{
	i=x;
	}
friend void b::sum(a);
};
void b::sum(a aobj)
{
cout<<"The sum is "<<aobj.i+j;
}
void main()
{
a a1;
b b1;
a1.setdata(80);
b1.setdata(50);
b1.sum(a1);
}
