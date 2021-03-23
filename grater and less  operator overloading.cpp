#include<iostream>
using namespace std;
class temp
{
	int a,b;
	public:
		temp(int x,int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"a is :"<<a<<"\n";
			cout<<"b is :"<<b<<"\n";
		}
		int operator>(temp);
		
};
int temp :: operator>(temp c)
{
	if(a>c.a&&b>c.b)
	return 1;
	else 
	return 0;
}
int main()
{
	temp b1(2,3),b2(1,2);
	b1.display();
	cout<<"\n";
	
	b1.display();
	cout<<"\n";
	if(b1>b2)
	cout<<"condition is right"<<"\n";
	else 
	cout<<"condition is wrong"<<"\n";
	return 0;
}
