/*
Assignment : 09
Topic : Stack using linked list
03  ||       In Question-1, define a method to push a new element on to the stack.

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
};