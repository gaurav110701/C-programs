#include<iostream>
using namespace std;
class temp
{
	private:
		static int a;     // static memeber
		int b=9;          // nonstatic member 
		public:
		//	void fun()    //non static member function
		//	{
		//		cout<<"static ant nonstatic member sum is="<<a+b<<"\n";
		//	}
		
		
			//static	void fun()    // static member function with static member and nonstatic member 
			//{
			//	cout<<"static ant nonstatic member sum is="<<a+b<<"\n";
			//}
			
			static void fun()     // static member function
			{
				cout<<"static mamber is="<<a<<"\n";
			}
			
			
		
};

int temp :: a=20;    // static member decleration
int main()
{
	temp b1;
	b1.fun();
	return 0;
}

