#include<iostream>
using namespace std;
class temp1;
class temp
 {
	private:
		int a,b;
		public:
			void input();
			void print();
			friend void fun(temp,temp1);

 };
 class temp1
 {

 	public:
 		int c;
 		void print1();
 		void input2();


 };
void temp :: input()   // for temp class
{
	cout<<"enter any two number \n";
	cin>>a>>b;
}
void temp1 :: input2()
{
    cout<<"enter a number to temp1 class \n";
    cin>>c;
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
void fun(temp ,temp1)
{
	int s;
    temp s1;
	temp1 s2;
    int getdata;
     s1.input();
    s2.input2();
    //s1.a=12;
    //s1.b=13;
    //s2.t=10;  // here t from temp1
    //void input();
    //void print();
	s=s1.a+s1.b+s2.c;
	cout<<"number is="<<s2.c<<"\n";
	cout<<"number is="<<s<<"\n";
	//return s;
}

int main()
{
	temp b1;
	temp1 b2;
	b1.input();
    b1.print();
	cout<<"now friend function is called"<<"\n";
	fun(b1,b2);
	return 0;
}


