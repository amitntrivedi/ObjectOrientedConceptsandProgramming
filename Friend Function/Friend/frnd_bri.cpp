//An example of friend as bridges
#include<iostream.h>
class ABC;
class XYZ
{
int x;
public:
	void setvalue(int i)
	{
	x=i;
	}
	friend void max(XYZ,ABC);
};
class ABC
{
int a;
public:
	void setvalue(int j)
	{
	a=j;
	}
	friend void max(XYZ,ABC);
};
void max(XYZ m,ABC n)
{
	if(m.x>n.a)
	cout<<"The Larger is "<<m.x<<" And it belongs to Class XYZ";
	else
	cout<<"The Larger is "<<n.a<<" And it belongs to Class ABC";
}
void main()
{
ABC a1;
XYZ x1;
int a,b;
cout<<"Enter two numbers:";
cin>>a>>b;
a1.setvalue(a);
x1.setvalue(b);
max(x1,a1);
}
