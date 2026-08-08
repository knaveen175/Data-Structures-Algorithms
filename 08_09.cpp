/*
Assignment : 08
Topic : Stack using Arrays
09  ||       In Question-1, define a method to reverse a stack.

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
        ~Stack()
        {
            delete[] ptr;
        }
        void push(int element)
        {
            if(top == Capacity-1)
            {
                cout<<"Stack Overflow !\n";
                return;
            }   
            top++;
            ptr[top] = element;
        }
        int peek()
        {
            if(top == -1)
            {
                cout<<"Stack Underflow\n";
                return -1;
            }
            return ptr[top];
        }
        void pop()
        {
            if(top == -1)
            {
                cout<<"Stack Underflow !\n";
                return;
            }
            top--;
        }
        void reverse_stack()
        {
            if(top == -1)
                return;
            int a[top+1], i = 0;
            while (top != -1)
            {
                a[i] = peek();
                pop();
                i++;
            }
            int x = top+1;
            top = -1;
            do
            {
                push(a[x]);
                x++;
            }while(x != i);
        }
};