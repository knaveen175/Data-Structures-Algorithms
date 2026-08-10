/*
Assignment : 09
Topic : Stack using linked list
02  ||       In Question-1, define a constructor to initialise member variable.

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
};