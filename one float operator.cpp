#include<iostream>
using namespace std;
class temp
{
	float a;
	int b;
	
	public:
		void fun(float x,int y)
		{
			a=x;
			b=y;
		}
		void disp(){
			cout<<"first number is="<<a<<"\n";
			cout<<"second number is="<<b<<"\n";
		}
      
        temp operator+(temp);
        temp operator-(temp);
        temp operator*(temp);
        temp operator/(temp);
};

temp temp :: operator+(temp c)
{
	temp ram;
	ram.a=a+c.a;
	ram.b=b+c.b;
	return ram;
}
temp temp :: operator-(temp c)
{
	temp ram;
	ram.a=a-c.a;
	ram.b=b-c.b;
	return ram;
}
temp temp :: operator*(temp c)
{
	temp ram;
	ram.a=a*c.a;
	ram.b=b*c.b;
	return ram;
}
temp temp :: operator/(temp c)
{
	temp ram;
	ram.a=a/c.a;
	ram.b=b/c.b;
	return ram;
}

int main()
{
	
	temp b1,b2,b3;
	b1.fun(2.2,4);
	b2.fun(4.4,8);
	b1.disp();
	
	cout<<"+ operator is run \n";
	b3=b1+b2;
	b3.disp();
	
	cout<<"- operator is run \n";
		b3=b1-b2;
	    b3.disp();
	    
	    cout<<"* operator is run \n";
		b3=b1*b2;
	    b3.disp();
	    
	    cout<<"/ operator is run \n";
		b3=b1/b2;
	    b3.disp();
	    return 0;
}
