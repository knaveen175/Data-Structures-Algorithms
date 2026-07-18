/*
Assignment : 01
Topic : Array Data Structure
03 ||       In Question-1, add a method to check whether an array is empty or not by returning True or False.

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
};