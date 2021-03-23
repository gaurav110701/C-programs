#include<iostream>
using namespace std;
class temp
{
	private:
		static int a,b;  
		public:
		
		static void fun()
		{
			cout<<"sum is="<<a+b<<"\n";
		}
	
		
};
	int temp :: a=10;
	int temp :: b=40;
	
		int main()
		{
		
			temp b1;
			b1.fun();
            return 0;			
		}
		
