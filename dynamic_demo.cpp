#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int * Arr = NULL;

    cout<<"Enter the number of elements \n";
    cin>>length;
    
    // Step 1: Allocate the Memory
    Arr = new int[length];
    if(Arr == NULL)
    {
        cout<<"Unable to allocate the memory";
    }
    else 
    {
        cout<<"Memory gets succesfully allocated";
    }

    // Step 2: Use the Memory

    // Step 1: Deallocate the Memory
    delete [] Arr;

    return 0;
}