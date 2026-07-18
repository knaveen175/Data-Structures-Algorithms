/*
Assignment : 01
Topic : Array Data Structure
04 ||       In Question-1, define a method to append a new element in the array.

*/
#include<iostream>
using namespace std;

class Array
{
    private:
        int Capacity, LastIndex, *p;
    public:
        Array(int size)
        {
            Capacity = size;
            LastIndex = -1;
            p = new int[Capacity];
        }
        void SetCapacity(int c)
        {
            Capacity = c;
        }
        void CreateArray()
        {
            p = new int[Capacity];
        }
        bool CheckArray()
        {
            if (LastIndex == -1)
                return true;
            else
                return false;
// True means Array is Empty, and False means Non-Empty.
        }
        void Append(int a)
        {
            if(LastIndex < Capacity-1)
            {
                LastIndex++;
                p[LastIndex] = a;
            }
            else
                cout<<"Array is Full !"; 
        }
};