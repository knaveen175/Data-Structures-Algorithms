/*
Assignment : 11
Topic : Queue using linked list
04  ||       In Question-1, define a method to view rear element in the queue.

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
        void Insert(int element)
        {
            node *temp = new node;
            temp->item = element;
            temp->next = nullptr;

            if (front == nullptr)
            {
                front = temp;
                rear = temp;
                return;
            }
            rear->next = temp;
            rear = temp;
        }
        void View_Rear()
        {
            if (rear == nullptr)
                return;
            cout<<"Element = "<<rear->item<<endl;
        }
};