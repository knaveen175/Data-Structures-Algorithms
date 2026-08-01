/*
Assignment : 07
Topic : Circular Doubly Linked List
03  ||       In Question-1, define a method to insert a data into the list at the beginning.

*/
#include<iostream>
using namespace std;

struct node
{
    int item;
    node *prev, *next;
};

class CDLL
{
    private:
        node *start;
    public:
        CDLL()
        {
            start = nullptr;
        }
        void Insert_at_beggining(int item)
        {
            node *t = new node;
            t->item = item;
            if(start == nullptr)
            {
                t->next = t;
                t->prev = t;
                start = t;
                return;
            }
            t->next = start;
            t->prev = start->prev;
            start->prev->next = t;
            start->prev = t;
            start = t;
        }
};