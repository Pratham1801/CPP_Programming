#include<iostream>
using namespace std;

class Base      //8
{
    public:
        int i,j;

        void fun()
        {
            cout<<"Inside Base fun \n";
        }
};

class Derived : public Base         //12
{
    public:
        int x;

        void gun()
        {
            cout<<"Inside Derived gun \n";
        }
};

int main()
{
    Base bojb;
    Derived dobj;

    bojb.fun();
    
    dobj.fun();
    dobj.gun();

    return 0;
}