/*
Assignment : 12
Topic : Deque
09  ||       In Question 1, define a destructor to deallocates the memory.

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
        ~Deque()
        {
            while(front != nullptr)
            {
                Delete_Front();
            }
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
        void Delete_Front()
        {
            if (front == nullptr)
                throw("Deque is Empty");
                
            node *t = front;
            front = front->next;
            delete t;
            if (front == nullptr)
                rear = nullptr;
            else
                front->prev = nullptr;
        }
        void Delete_Rear()
        {
            if (rear == nullptr)
                throw("Deque is Empty");
            
            node *t = rear;
            rear = rear->prev;
            delete t;
            if(rear == nullptr)
                front = nullptr;
            else
                rear->next = nullptr;
        }
        int Get_Front()
        {
            if (front == nullptr)
                throw("Deque is Empty");
            return front->item;
        }
        int Get_Rear()
        {
            if (rear == nullptr)
                throw("Deque is Empty");
            return rear->item;
        }
};