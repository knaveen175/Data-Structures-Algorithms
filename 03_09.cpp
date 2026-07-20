/*
Assignment : 03
Topic : Dynamic Arrays
09 ||       In Question-1, define a method to edit an element at specified index.

*/
#include<iostream>
using namespace std;

class DynArray
{
    private:
        int Capacity, LastIndex, *ptr;
    public:
        void SetCapacity(int c)
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
        bool CheckArray()
        {
            if (LastIndex == -1)
                return true;
            else
                return false;
        }
// True means array is Empty and False means Non-Empty.
        void Append(int a)
        {
            if (LastIndex == Capacity-1)
                DoubleArray();
                LastIndex++;
                ptr[LastIndex] = a;
            }
        void Insert(int index, int data)
        {
            if (LastIndex == Capacity-1)
                DoubleArray();
            if(index < 0 || index > LastIndex)
            {
                cout<<"Invalid Index ";
                return;
            }
            for (int i = LastIndex ; i >= index ; i--)
                ptr[LastIndex+1] = ptr[LastIndex];
            ptr[index] = data;
        }
        void Edit(int index, int newdata)
        {
            if(index < 0 || index > LastIndex)
            {
                cout<<"Invalid Index ";
                return;
            }
            ptr[index] = newdata;
        }
        void DisplayArray()
        {
            for(int i=0 ; i < LastIndex ; i++)
                cout<<ptr[i]<<" ";
            cout<<endl;
        }
};