#include<iostream>
using namespace std;
class temp
{
	int a,b;
	public:
		int c;
		void input()
		{
			cout<<"enter any two number \n";
			cin>>a>>b;
		}
		void sum()
		{
			cout<<"sum is="<<a+b<<"\n";
		}
		void input1()
		{
			cout<<"enter a number \n";
			cin>>c;}
			void tec()
			{
				cout<<"this is frist number="<<a<<"\n";
				cout<<"this is second number="<<b<<"\n";
			}
	        
};
class temp1 : public temp
{
	public:
	void print()
	{
		cout<<"number is="<<c<<"\n";
	}
	void tec()
	{
		cout<<"last number is="<<c<<"\n";
	}
};
int main()
{
	temp *a;
	temp1 b1;
	a=&b1;
	a->tec();
	a->tec();
	//temp1 b1;
	cout<<"take input \n";
	a->input();
	cout<<"print sum \n";
	a->sum();
	cout<<"take second input \n";
	a->input1();
	cout<<"print number of child class \n";
	a->print();
}
