
#include<iostream>
using namespace std;
class temp
{
    char x[23],y[23];
public:
    void fun(char a[23],char b[23])
    {
        x=a;
        y=b;
    }
    void display();
    temp operator+(temp);
};
temp temp ::  operator+(temp c)
{
    temp b;
    b.x=c.x+x;
    b.y=c.y+y;
    return b;

}
void temp :: display()
{

    cout<<"sum 1 is:"<<x<<"\n";
    cout<<"sum 2 is:"<<y<<"\n";
}
int main()
{
    cout<<"frist object is create \n";
    temp b1;
    b1.fun(gaurav,singh);
    b1.display();

    cout<<"second object is created \n";
    temp b2;
    b2.fun(34,40);
    b2.display();

       cout<<"third object is created \n";
       cout<<"operator overloading is completed \n";
    temp b3=b1+b2;
    b3.display();
}
