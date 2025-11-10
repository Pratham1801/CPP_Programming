#include<iostream>
using namespace std;

class Base      //12
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;

    public:
        Base()
        {
            i = 10; j = 20; k = 30;
        }
        void fun()
        {
            cout<<"i"<<"\n";       //Allowed
            cout<<"j"<<"\n";       // Allowed
            cout<<"k"<<"\n";        //Allowed
        }
};

class Derived : public Base     //16
{
    public:
    int x;
        void Display()
        {
            cout<<"i"<<"\n";        //Allowed
            cout<<"j"<<"\n";        // Error
            cout<<"k"<<"\n";        // Allowed
        } 
};

int main()
{
    Base bojb;
    Derived dobj;

    cout<<bojb.i<<"\n";     //Allowed
    cout<<bojb.j<<"\n";     //Error
    cout<<bojb.k<<"\n";     //Error

    cout<<dojb.i<<"\n";     //Allowed
    cout<<dojb.j<<"\n";     //Error
    cout<<dojb.k<<"\n";     //Error
    
    dobj.fun();         //Allowed
    dobj.Display();     //Allowed

    return 0;
}