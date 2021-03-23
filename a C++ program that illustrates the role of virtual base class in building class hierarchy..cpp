#include<iostream>
using namespace std;
 

	class A
	{
		public:
			int a,b;
			void input()
			{
				cout<<"enter any two number \n";
			cin>>a>>b;
			}
			void print()
			{
				cout<<"sum is:"<<a+b<<"\n";
			}
	};
	class B : virtual public A
{
		public:
		void input1()
			{
				cout<<"enter any two number \n"<<"\n";
				cin>>a>>b;
			}
			void print1()
			{
				cout<<"sum is:"<<a+b<<"\n";
			}
	};
	
	class C : virtual public A
	{
		public:
			void input2()
			{
				cout<<"enter any two number \n"<<"\n";
				cin>>a>>b;
			}
			void print2()
			{
				cout<<"sum is:"<<a+b<<"\n";
			}
	};
	
	class D : public B,public C
//class D : public A
	{
		public:
			void tec()
			{
			
		cout<<"hello virtual base class WELCOME \n";}
		
			void input3()
			{
				cout<<"enter any two number \n";
				cin>>a>>b;
			}
			void print3()
			{
				cout<<"sum is:"<<a+b<<"\n";
			}
		
	};
	
	int main()
	{
		D b1;
		b1.input();
	   	b1.print();
		
		b1.input1();
		b1.print1();
		
		b1.input2();
		b1.print2();

		
		b1.input3();
		b1.print3();
		b1.tec();
		return 0;
	}
