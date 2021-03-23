#include<iostream.h>
using namespace std;
class temp1;
class temp
 {
	private:
		int a,b;
		public:
			void input();
			void print();

			friend void temp :: fun();
 };
 class temp1
 {
 	private:
 		int t;
 		void print1();

 };
void temp :: input()
{
	cout<<"enter any two number \n";
	cin>>a>>b;
}

void temp :: print()
{

	cout<<"number is a :" <<a<<"\n";
	cout<<"number is b :" <<b<<"\n";
}
//void print()
///{
//	cout<<"print the number of temp1 class "<<t;

//}
void fun()
{
	int s;
    int getdata;
    s.a=12;
    s.b=13;
    d.t=10;
    //void input();
    //void print();
	s=c.a+c.b+d.t;
	cout<<"number is="<<s<<"\n";
	//return s;
}

int main()
{
	temp b1;
	temp b2;
	b1.input();
    b1.print();
	cout<<"now friend function is called"<<"\n";
	fun(b1,b2);
}


