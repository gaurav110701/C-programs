#include<iostream>
using namespace std;
class temp
 {
	private:
		int a,b;
		public:
			void input();
			void print();
			
			friend void fun(temp);
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
void fun(temp c)
{
	int s;
    int getdata;
    void input();
    void print();
	s=c.a+c.b;
	cout<<"number is="<<s<<"\n";
	//return s;	
}

int main()
{
	temp b1;
	b1.input();
    b1.print();
	cout<<"now friend function is called"<<"\n";
	fun(b1);
}


