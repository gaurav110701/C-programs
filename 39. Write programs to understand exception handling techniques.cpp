#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw 6;
	}
	
	catch (int a)
	{
		cout<<"number is"<<a<<"\n";
	}
	return 0;
}

