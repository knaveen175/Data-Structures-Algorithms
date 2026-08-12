/*
Assignment : 09
Topic : Stack using linked list
07  ||       Define a method to reverse a stack.

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
        ~Stack()
        {
            while(top != nullptr)
            {
                pop();
            }
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
        void Insert_at_bottom(int element)
        {
            node *temp = new node; 
            node *t = top;
            temp->item = element;
            temp->next = nullptr;
            if(top == nullptr)
            {
                top = temp;
                return;
            }
            while (t->next != nullptr)
            {
                t = t->next;
            }
            t->next = temp;
        }
        void reverse()
        {
            if(top == nullptr)
                return;
            int x = peek();
            pop();
            reverse();
            Insert_at_bottom(x);
        }
};