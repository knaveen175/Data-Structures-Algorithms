/*
Assignment : 01
Topic : Array Data Structure
02 ||       In Question-1, define a parameterised constructor to create an array of specified size.

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
};