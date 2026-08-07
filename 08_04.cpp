/*
Assignment : 08
Topic : Stack using Arrays
04  ||       In Question-1, define a method to peek top element of the Stack.

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
        Stack(int c)
        {
            Capacity = c, top = -1;
            ptr = new int[Capacity];
        }
        void push(int element)
        {
            if(top >= Capacity-1)
                return;
            top++;
            ptr[top] = element;
        }
        int peek()
        {
            if(top == -1)
            {
                cout<<"Stack is Empty\n";
                return -1;
            }
            return ptr[top];
        }
};