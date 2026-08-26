/*
Assignment : 12
Topic : Deque
04  ||       In Question 1, define a method to insert a new element at the rear.

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
        void Insert_at_Rear(int data)
        {
            node *t = new node;
            t->item = data;
            t->next = nullptr;
            if (rear == nullptr)
            {
                t->prev = nullptr;
                rear = t;
                front = t;
                return;
            }
            t->prev = rear;
            rear->next = t;
            rear = t;
        }
};