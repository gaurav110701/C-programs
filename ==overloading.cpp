#include<iostream>
using namespace std;
class temp
{
	int x,y;
	public: 
		temp(int a,int b)  //parameterised constructor
		{
			x=a;
			y=b;
		}
		void display(){
			cout<<"x is:"<<x<<"\n";
			cout<<"y is:"<<y<<"\n";
		}
		int operator ==(temp);
};

int temp :: operator==(temp c)
{
	if(x==c.x&&y==c.y)
	return (1);
	else 
	return 0;
	
	//return *this;
}
int main()
{
	temp b1(1,2),b2(1,2),b3(2,3);
	b1.display();
	cout<<"\n";
	b2.display();
	cout<<"\n";
	b3.display();
	//b3.display();
	
	if(b1==b2)
	cout<<"== is done"<<"\n";
	else 
	cout<<"== is not dome"<<"\n";
	
	if(b1==b3)
	cout<<"== is done for b3 object"<<"\n";
	else
	cout<<"== is not done for b3 object"<<"\n";
	return 0;
	
}
