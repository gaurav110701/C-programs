#include<iostream>
#include<stdlib.h>

using namespace std;
class student
{
    string name;
    int age;
public:
    student()
    {
        cout<< "Constructor is called\n" ;
    }
    student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout<< "Name:" << name <<"\n";
        cout<< "Age:" << age <<"\n";
    }
    void * operator new(size_t size)
    {
        cout<< "Overloading new operator with size: " << size <<"\n";
        void * p = ::new student();


        return p;
    }

    void operator delete(void * p)
    {
        cout<< "Overloading delete operator " <<"\n";
        free(p);
    }
};

int main()
{
    student * p = new student("Yash", 24);

    p->display();
    delete p;
}
