/*
Assignment : 03
Topic : Dynamic Arrays
03 ||       In Question-1, define a method doubleArray() to increase the size of the array by double of its size.

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
        DynArray(int c)
        {
            Capacity = c;
            LastIndex = -1;
            ptr = new int[Capacity];
        }
        void DoubleArray()
        {
            int i, *temp;
            temp = new int[2*Capacity];
            for (i = 0 ; i <= LastIndex ; i++)
                temp[i] = ptr[i];
            delete[] ptr;
            ptr = temp;
        }
        void DisplayArray()
        {
            for(int i=0 ; i < LastIndex ; i++)
                cout<<ptr[i]<<" ";
            cout<<endl;
        }
};