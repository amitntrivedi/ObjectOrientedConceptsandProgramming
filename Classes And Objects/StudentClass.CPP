#include <iostream.h>
#include <conio.h>


class Student
{
   private:
   int sem;
   int rollno;

   private:
   void setData(int psem, int prollno)
   {
	sem = psem;
	rollno =	 prollno;
   }
   void getData()
   {
	cout<<"sem "<<sem<<endl;
	cout<<"Roll no"<<rollno<<endl;

   }

};

void main()
{
	Student  pintu;
	Student ravi;

	clrscr();
	cout<< "Pintu's Details"<<endl;
	pintu.setData(3,41);
	pintu.getData();
	getch();
}

