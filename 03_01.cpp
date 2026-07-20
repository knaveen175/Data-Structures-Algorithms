/*
Assignment : 03
Topic : Dynamic Arrays
01 ||       Define a class DynArray to implement dynamic array data structure with member variables to store capacity of array, last index, last index of the filled block of the array and a pointer to hold the address of the first block of the dynamically created array.

*/
#include<iostream>
using namespace std;

class DynArray
{
    private:
        int Capacity, LastIndex, *ptr;
    public:
        void setCapacity(int c)
        {
            Capacity = c;
        }
        void CreateArray()
        {
            ptr = new int[Capacity];
        }
        void DisplayArray()
        {
            for(int i=0 ; i < LastIndex ; i++)
                cout<<ptr[i]<<" ";
            cout<<endl;
        }
};