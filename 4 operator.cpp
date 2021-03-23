#include<iostream>
using namespace std;
class temp
{
	int a,b;
	public:
	//temp(int x,int y)
	//temp()
	void tec(int x, int y)
    {
		a=x;
		b=y;
	 }
	void display()
	{
		cout<<"a is:"<<a<<"\n"<<"b is:"<<b<<"\n";
	}
	 temp operator+(temp);
	 temp operator-(temp);
	 temp operator*(temp);
	 temp operator/(temp);
};

temp temp :: operator+(temp c)
{
	temp t;
	t.a=a+c.a;
	t.b=b+c.b;
	return t;
}

temp temp :: operator-(temp c)
{
	temp t;
	t.a=a-c.a;
	t.b=b-c.b;
	return t;
}

temp temp :: operator*(temp c)
{
   	temp t;
	t.a=a*c.a;
	t.b=b*c.b;
	return t;	
}

temp temp :: operator/(temp c)
{
   	temp t;
	t.a=a/c.a;
	t.b=b/c.b;
	return t;	
}
int main()
{
	temp b1,b2,b3;
	b1.tec(4,5);
	b2.tec(5,6);
	cout<<"print frist time"<<"\n";
	b1.display();
	b2.display();
	cout<<"\n";
	cout<<"addition is done"<<"\n";
	b3=b1+b2;
	b3.display();
	cout<<"\n";
	
	cout<<"substration is done \n";
	b3=b1-b2;
	b3.display();
	cout<<"\n";
	
	cout<<"multipletionis done"<<"\n";
	b3=b1*b2;
	b3.display();
	cout<<"\n";
	
	cout<<"divide is done"<<"\n";
	b3=b1/b2;
	b3.display();
}
