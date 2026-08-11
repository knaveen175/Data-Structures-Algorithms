/*
Assignment : 09
Topic : Stack using linked list
05  ||       In Question-1, define a method to pop the top element of the stack.

*/
#include<iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};

class Stack
{
    private:
        node *top;
    public:
        Stack()
        {
            top = nullptr;
        }
        void push(int element)
        {
            node *temp = new node;
            temp->item = element;
            if (top == nullptr)
            {
                temp->next = nullptr;
                top = temp;
                return;
            }
            temp->next = top;
            top = temp;
        }
        int peek()
        {
            if(top == nullptr)
            {
                cout << "Stack is Empty";
                return -1;
            }
            return top->item;
        }
        void pop()
        {
            if(top == nullptr)
                return;
            node *t = top;
            top = top->next;
            delete t;
        }
};