/*
Assignment : 03
Topic : Dynamic Arrays
05 ||       In Question-1, define a method which returns the current capacity of the array.

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
        int get_Capacity()
        {
            return Capacity;
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
        void HalfArray()
        {
            if (LastIndex < Capacity/2)
            {
                int i, *temp;
                temp = new int[Capacity/2];
                for (i = 0 ; i <= LastIndex ; i++)
                    temp[i] = ptr[i];
                delete[] ptr;
                ptr = temp;
            }
        }
        void DisplayArray()
        {
            for(int i=0 ; i < LastIndex ; i++)
                cout<<ptr[i]<<" ";
            cout<<endl;
        }
};