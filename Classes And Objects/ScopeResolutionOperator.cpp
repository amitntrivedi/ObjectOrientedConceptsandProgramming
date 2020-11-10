#include <iostream>
using namespace std; 

class Student
{
   private:
    int sem;
    int rollno;

   public:
    void setData(int , int ); //function signature
    void  getData(); 
};

void Student::setData(int psem, int prollno)   //function header
{
    sem = psem;
	rollno =	 prollno;
}

void Student:: getData()         //function header
{
	cout<<"sem "<<sem<<endl;
	cout<<"Roll no"<<rollno<<endl;
}

int  main()
{
	Student  pintu;
	Student ravi;
	cout<< "Pintu's Details"<<endl;
	pintu.setData(3,41);
	pintu.getData();
    return 0; 
}