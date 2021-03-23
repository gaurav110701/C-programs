#include<iostream>
using namespace std;
class temp
{ public:
	int x,y;
	public:
		temp()
		{
			x=0;
			y=0;
		}
		void f()
		{
			cout<<"hello \n";
		}
};

class tec : private temp
{
	public:
		void disp()
		{
		
	cout<<"x:"<<x<<"y:"<<y;
}};

int main()
{
	tec b1;
	b1.disp();
	b1.f();
	
}
