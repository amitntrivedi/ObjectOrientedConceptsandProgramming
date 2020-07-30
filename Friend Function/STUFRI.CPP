#include <iostream.h>
#include <conio.h>

class Student
{
	int sem;
	int rollno;
	int pin;
	public:
	void setData(int s, int r, int p)
	{
		sem=s;
		rollno=r;
		pin=p;
	}
	void getData()
	{
		cout<<" Sem: "<<sem<<endl;
		cout<<" Roll No: "<<rollno<<endl;
		cout<<" Pin "<<pin<<endl;
	}
	friend void print(Student);

};

void print(Student obj)
{
	cout<< "Inside Print fucntion"<<endl;
	cout<<"PIN (never share) " <<obj.pin<<endl;
}


void main()
{
	Student mihir;
	clrscr();
	cout<<" Title: Making Print fucntion friend student class"<<endl;

	cout<<"Detail's of Mihir"<<endl;
	mihir.setData(3,16,957);
	mihir.getData();

	print(mihir);

	getch();

}