#include<iostream>
using namespace std;
class temp
{
	int a,b,i,n,x,squre;
	float t,squre1;
	public:
		void temp1()
		{
	cout<<"enter a integer number to squre \n";
	cin>>n;

		}
	
		void integer()
		{
		squre=n*n;
		}
		void disp()
		{
			cout<<"squre is the="<<squre<<"\n";
		}
		void temp2()
		{
			cout<<"enter a float nuber \n";
	        cin>>t;	
		}
	void floatt()
	{
	squre1=t*t;
	}
		void disp1()
		{
			cout<<"squre is the="<<squre1<<"\n";
		}
};
int main()
{
	temp b1;
	b1.temp1();
	b1.integer();
	b1.disp();
	
	cout<<"\n";
	b1.temp2();
	b1.floatt();
	b1.disp1();
}
