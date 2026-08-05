/*
Assignment : 08
Topic : Stack using Arrays
01  ||       Define a class Stack with Capacity, top and ptr pointer as member variables. Implement Stack using array.

*/
#include<iostream>
using namespace std;

class Stack
{
    private:
        int Capacity, top, *ptr;
    public:
        Stack()
        {
            Capacity = 0, top = -1, ptr = nullptr;
        }
};