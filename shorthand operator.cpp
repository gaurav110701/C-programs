#include<iostream>
using namespace std;
class temp
{
	private:
	        int a,b;
	public:
		    int x;
		void get()
		{
			cout<<"enter a number to passingg operator \n";
			cin>>x;
		}
	temp()
	{
		a=2;
		b=3;
	}
	void display()
	{
		cout<<"frist number is="<<a<<"\n";
		cout<<"second number is"<<b<<"\n";
	}
     	 temp operator+=(int x);
     	 temp operator-=(int x);
	
};

temp operator+=(int x)
{
	temp t;
	t.a=a+x;
	t.b=b+x;
	return t;
}
temp operator+=(temp c,int x)
{
	temp t;
	t.a=x-c.a;
	t.b=x-c.b;
	return t;
}
int main()
{   
    cout<<"before overloading \n";
	temp b1,b2,b3;
	b1.display();
	
	b1.get();
	cout<<"(a+b1) is: \n";
	 b2=b1.x+b1;    
	 //b2=b1+get();
	//b1.operator+(temp,x);
	b2.display();
	cout<<"(b1+a) is:\n";
	b3=b1+b1.x;
	b3.display();
	return 0;
	
}
