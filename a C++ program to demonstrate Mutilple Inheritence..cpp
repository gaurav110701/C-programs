#include<iostream>
using namespace std;
class course
{
	/*
		public:
				char name;
	           float credit;
              	int id;
			
		 void input()
	{
		cout<<" Enter name = "<<"\n";
		cin>>name;
		cout<<"enter credit = "<<"\n";
		cin>>credit;
		cout<<"Enter ID = "<<"\n";
	}
      void print()
	{
		cout<<"NAME IS = "<<name;
		cout<<"CREDIT IS = "<<credit;
		cout<<" ID IS = "<<id;
	}*/
	
};
class teacher : public course
{ 
   /* 
	public: 
	int T_id;
	void input1()
	{
		cout<<"Enter T_id"<<"\n";
		cin>>T_id;
		
	}
	 void print1(){
		cout<<"T_id ="<<T_id<<"\n";
	}*/
		
};

class student : public course
{
/*	int s_id;
		public:
		 void input2()
	{
		cout<<"Enter s_id"<<"\n";
		cin>>s_id;
		
	}
	 void print2(){
		cout<<"S_id ="<<s_id<<"\n";
	}*/
};
class person : public teacher,public student
{
	
		/*	public: 
			int aadhar_no;
	        char name;
			void input2()
                	{
		cout<<"Enter aadhar_no"<<"\n";
		cin>>aadhar_no;
		
              	}
	 void print2(){
  		cout<<"aadhar_no ="<<aadhar_no<<"\n";
           	}*/
};
int main()
{
	course b1;
/*	b1.input();
	b1.print();
	
	b1.input1();
	b1.print1();
	
	b1.input2();
	b1.print2(); */
	
}
