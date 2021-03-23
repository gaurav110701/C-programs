//a C++ program to demonstrate single Inheritence.
#include<iostream>
using namespace std;
class A {
	int a,b;
	public:
		void fun(int x,int y);
		void disp();
	};
	
	void A :: fun(int x,int y)
	{
		a=x;b=y;
	}
	
	void A :: disp()
	{
		cout<<"a:"<<a<<"\n"<<"b:"<<b<<"\n";
	}

class B : public A
{
	int c;
	public:
		void temp(int z);
        void display();	
};
     void B :: temp(int z)
     {
     	c=z;
	 }
	 
	void B :: display()
		{
			cout<<"c:"<<c<<"\n";
		}
		
int main()
{
	B b1;
	b1.temp(10);
	 b1.display();
	
	b1.fun(20,30);
	b1.disp();
}
