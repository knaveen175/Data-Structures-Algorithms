/*
Assignment : 03
Topic : Dynamic Arrays
06 ||       In Question-1, add a method which to check whether an array is empty or not by returing true or false.

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
        bool CheckArray_EmptyorNot()
        {
            if (LastIndex == -1)
                return true;
            else
                return false;
        }
// True means array is Empty and False means Non-Empty.
        void DisplayArray()
        {
            for(int i=0 ; i < LastIndex ; i++)
                cout<<ptr[i]<<" ";
            cout<<endl;
        }
};