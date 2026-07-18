/*
Assignment : 01
Topic : Array Data Structure
01 ||       Write a Array class to implement array data structure with member variables to store capacity of array, last index of the last filled block of the array and a pointer to hold the address of first block of the dynamically created array.

*/
#include<iostream>
using namespace std;

class Array
{
    private:
        int Capacity, LastIndex, *p;
    public:
        void SetCapacity(int c)
        {
            Capacity = c;
        }
        void CreateArray()
        {
            p = new int[Capacity];
        }
};