/*
Assignment : 11
Topic : Queue using linked list
08  ||       In Question-1, define a method to count number of elements present in the queue.

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
        ~Queue()
        {
            while (front != nullptr)
            {
                Delete_Front();
            }
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
        void View_Front()
        {
            if (front == nullptr)
                return;
            cout<<"Element = "<<front->item<<endl;
        }
        void Delete_Front()
        {
            if (front == nullptr)
                return;
            node *t = front;
            front = front->next;
            delete t;
            
            if (front == nullptr)
                rear = nullptr;
        }
        void Count()
        {
            int count = 0;
            node *t = front;
            while (t != nullptr)
            {
                count++;
                t = t->next;
            }
            cout<<"Number of Elements -> "<<count<<endl;
        }
};