#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        {
            cout<<"Inside Base fun \n";
        }
};

class Derived : public Base
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

    cout<<"Size of Base class object :"<<sizeof(bojb)<<"\n";
    cout<<"Size of Derived class object :"<<sizeof(dobj)<<"\n";

    return 0;
}