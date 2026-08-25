/*
Assignment : 12
Topic : Deque
03  ||       In Question 1, define a method to insert a new element at the front.

*/
#include<iostream>
using namespace std;

struct node
{
    int item;
    node *prev;
    node *next;
};

class Deque
{
    private:
        node *front;
        node *rear;
    public:
        Deque()
        {
            front = nullptr;
            rear = nullptr;
        }
        void Insert_at_Front(int data)
        {
            node *t = new node;
            t->item = data;
            t->prev = nullptr;
            if (front == nullptr)
            {
                t->next = nullptr;
                front = t;
                rear = t;
                return;
            }
            t->next = front;
            front->prev = t;
            front = t;
        }
};