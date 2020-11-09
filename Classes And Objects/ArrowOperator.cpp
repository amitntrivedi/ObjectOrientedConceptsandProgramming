#include <iostream>
using namespace std; 
class Student
{
    int rollno; 
    int marks; 
    public:
    void setData(int r, int m)
    {
        rollno=r; 
        marks=m; 
    }
    void getData()
    {
        cout<<"Roll No: "<<rollno<<endl; 
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    Student obj1;  
    obj1.setData(54,33); 
    obj1.getData(); 
    Student *p=&obj1; 
    p->getData(); 
    (*p).getData(); 
    return 0; 

}