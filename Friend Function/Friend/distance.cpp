//An example of a friend function that is used to add two objects of a class and the resultant
//is a third object of the same class
#include<iostream.h>
#include<conio.h>

class Distance
{
	int feet;
	int inches;
	public:
	void setData()
	{
		cout<<"Enter feet and inches:";
		cin>>feet>>inches;
		if(inches>=12)
		{
			feet=feet+(int)inches/12;
			inches=inches-(int)inches/12*12;
		}
	}
	void getData()
	{
		cout<<"Feet="<<feet<<"\nInches="<<inches<<endl;
	}
	friend Distance add(Distance,Distance);
};
Distance add(Distance distOne,Distance distTwo)
{
	Distance distRes;
	distRes.feet=distOne.feet+distTwo.feet;
	distRes.inches=distOne.inches+distTwo.inches;
	if(distRes.inches>=12)
	{
		distRes.feet=distRes.feet + (int)distRes.inches/12;
		distRes.inches = distRes.inches-(int)distRes.inches/12*12;
	}
	return temp;
}
void main()
{
	Distance d1,d2,d3;
	d1.setData();
	d2.setData();
	d3=add(d1,d2);
	d3.getData();
	getch(); 

}
