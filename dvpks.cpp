#include<iostream>
using namespace std;
class temp
{
private:
    int x;
public:
    void putdat(int a)
    {
        x=a;
    }
    void print()
    {
        cout<<"The number is="<<x<<"\n";
    }
   void  operator++();
    //void operator++(int,temp);
};
void temp :: operator++()
{
    x++;
    return(*this);
}
int main()
{
    temp b1;
    b1.putdata(3);
    b1.print();
    b1++;
    b1.print();
}

