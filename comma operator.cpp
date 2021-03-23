#include<iostream>
using namespace std;
class temp
{
	int a,b;
	public:
		void fun(int x,int y)
	    //temp(int x,int y)
		{
			a=x;
			b=y;
		}
	//	temp()
	//	{
	//		a=0;b=0;
	//	}
		void disp();
		temp operator++();
		temp  operator++(int);
		temp operator--();
		temp operator--(int);
		temp operator+(temp);
		temp operator ,(temp);
		   //add two objects
      //temp operator+=(temp);

};

void temp :: disp()
{
	cout<<"frist number is="<<a<<"\n"<<"second number is="<<b<<"\n";
}
temp temp :: operator++()   //prefix
{
	++a;
	++b;
	return (*this);
}
temp temp :: operator++(int)   //postfix
{
	a++;
	b++;
	return (*this);
}

temp  temp :: operator--()
{
	a--;
	b--;
}
temp temp :: operator--(int)
{
--a;
--b;
}

temp temp :: operator+(temp c)
{
	temp  rem;
	rem.a=a+c.a;
	rem.b=b+c.b;
	return rem;
}
temp temp :: operator,(temp c)
{
	temp rem;
	temp.a=a,c.a;
	temp.b=b,c.b;
	return rem;
}
int main()
{
	cout<<"before incriment \n";
	temp b2;
	b2.fun(2,2);
	//b2=temp(2,2);
	b2.disp();
    cout<<"\n";
	cout<<"aftr increament prefix \n";
	++b2;
	b2.disp();
	cout<<"\n";

	cout<<"after increament postfix \n";
	cout<<"before operation \n";b2.disp();
	cout<<"\n";
	b2++;
	cout<<"after perform operation \n";b2.disp();

		cout<<"before incriment \n";

	//b2.fun(2,2);
	//b2=temp(2,2);
	b2.disp();
cout<<"\n";
	cout<<"aftr increament prefix \n";
	--b2;
	b2.disp();
cout<<"\n";
	cout<<"after decreament postfix \n";
	cout<<"before operation \n";b2.disp();
	b2--;
	cout<<"after perform operation \n";b2.disp();cout<<"\n";

	cout<<"for add two object complex type \n";

	temp b3;
	b3.fun(3,5);
	cout<<"before using addition \n";b3.disp(); cout<<"\n";
	temp b4=b2+b3;
	cout<<"after perform addition \n";b4.disp();cout<<"\n";
	b4=b2,b3;
	cout<<"in comma operator = \n"<<b4.disp();
	return 0;
	}
