/*
Assignment : 11
Topic : Queue using linked list
02  ||       In Question-1, define a constructor to initialise member variable.

*/
#include<iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};

class Queue
{
    private:
        node *front, *rear;
    public:
        Queue()
        {
            front = nullptr;
            rear = nullptr;
        }
};