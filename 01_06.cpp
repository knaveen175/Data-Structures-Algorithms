/*
Assignment : 01
Topic : Array Data Structure
06 ||       In Question-1, define a method to edit an element at specified array.

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
        void Insert(int index, int data)
        {
            if(LastIndex == Capacity-1) 
            {   
                cout<<"Array is Full !"<<endl;
                return;
            }
            if(index < 0 || index > LastIndex)
            {
                cout<<"Invalid Index "<<endl;
                return;
            }
            LastIndex++;
            for (int i = LastIndex ; i >= index  ; i--)
                p[i] = p[i-1];
            p[index] = data;   
        }
        void Edit(int index, int newdata)
        {
            if(index < 0 || index > LastIndex)
            {
                cout<<"Invalid Index "<<endl;
                return;
            }
            p[index] = newdata;
        }
};