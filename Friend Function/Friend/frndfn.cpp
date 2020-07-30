//Non-Member Friend function
#include<iostream.h>
class sample
{
int a,b;
public:
void setvalue(int,int);
friend float mean(sample);
};
void sample::setvalue(int x,int y)
{
a=x;
b=y;
}
float mean(sample s)
{
return float(s.a+s.b)/2;
}
void main()
{
sample x;
int m,n;
cout<<"Enter two Numbers:";
cin>>m>>n;
x.setvalue(m,n);
cout<<"Mean Value="<<mean(x);
}
