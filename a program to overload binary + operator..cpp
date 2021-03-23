#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:

		void add(int x,int y);
		void disp();
		complex operator+(complex);
};

void complex::add(int x,int y)
{
	a=x;b=y;
}
complex complex::operator+(complex c)
{        complex temp;
         temp.a=a+c.a;
       	temp.b=b+c.b;
       	return temp;

}
void complex:: disp()
{
	cout<<"frist sum is ="<<a<<"\n"<<"second is ="<<b<<"\n";
}
int main()
{

	complex b1,b2,b3;
	b1.add(40,50);
	b2.add(30,40);
	b1.disp();
	b2.disp();
	cout<<"after operation \n";
	b3=b1+b2;
	b3.disp();
}
