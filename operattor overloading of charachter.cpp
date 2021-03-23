#include<iostream>
using namespace std;
class temp
{
	 char a[10],b[10];
	public:
	//temp(int x,int y)
	temp()
	//void tec(char x, char y)
    {
		a[10]="gaurav";
		b[10]="singh";
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
	t.a[10]=a[10]+c.a[10];
	t.b[10]=b[10]+c.b[10];
	return t;
}

temp temp :: operator-(temp c)
{
	temp t;
	t.a[10]=a[10]-c.a[10];
	t.b[10]=b[10]-c.b[10];
	return t;
}

temp temp :: operator*(temp c)
{
   	temp t;
	t.a[10]=a[10]*c.a[10];
	t.b[10]=b[10]*c.b[10];
	return t;	
}

temp temp :: operator/(temp c)
{
   	temp t;
	t.a[10]=a[10]/c.a[10];
	t.b[10]=b[10]/c.b[10];
	return t;	
}
int main()
{
	temp b1,b2,b3;
	//b1.tec(gaurav,s);
	//b2.tec(a,j);
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
