/*
Assignment : 05
Topic : Doubly Linked List
04  ||       In Question-1, define a method to insert a data into the list at the end.

*/
#include<iostream>
using namespace std;

struct node 
{
    int item;
    node *prev, *next;
};

class DLL
{
    private:
        node *start;
    public:
        DLL()
        {
            start = nullptr;
        }
        void Insert_at_beginning(int item)
        {
            if (start == nullptr)
            {
                node *temp = new node;
                temp->prev = nullptr;
                temp->item = item;
                temp->next = nullptr;
                start = temp;
                return;
            }
            node *temp = new node;
            temp->prev = nullptr;
            temp->item = item;
            temp->next = start;
            start->prev = temp;

            start = temp;
        }
        void Insert_at_end(int item)
        {
            if (start == nullptr)
            {
                node *temp = new node;
                temp->prev = nullptr;
                temp->item = item;
                temp->next = nullptr;
                start = temp;
                return;
            }
            node *t = start;
            while(t->next != nullptr)
            {
                t = t->next;
            }
            node *temp = new node;
            temp->prev = t;
            temp->item = item;
            temp->next = nullptr;
            t->next = temp;
        }
};