#include<iostream>
using namespace std;
class temp
{
	int a,b;
	public:
	temp()
	{
		a=0;
		b=0;
	}
	temp operator++();
	temp operator++(int);    //prefix operation

	void disp()
	{
		cout<<"a is:"<<a<<"\n"<<"b is :"<<b<<"\n";
	}
};

temp temp :: operator++()
{
	++a;
	++b;
	return (*this);
}
temp temp :: operator++(int)
{
	a++;
	b++;
	return (*this);
}


int main()
{
	temp b1;
	cout<<"before perform operation "<<"\n";
	b1.disp();
	
	cout<<"after perform prefix operation "<<"\n";
	++b1;
	b1.disp();
	
	cout<<"after perform postfix operation "<<"\n";
	b1++;
	b1.disp();}
