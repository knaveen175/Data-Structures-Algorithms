/*
Assignment : 06
Topic : Circular Linked List
04  ||       In-Question 1, define a insert a data into the list at the end.

*/
#include<iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};

class CLL
{
    private:
        node *last;
    public:
        CLL()
        {
            last = nullptr;
        }
        void Insert_at_beggining(int item)
        {
            node *t = new node;
            t->item = item;
            if(last == nullptr)
            {
                t->next = t;
                last = t;
                return;
            }
            t->next = last->next;
            last->next = t;
        }
        void Insert_at_end(int item)
        {
            node *t = new node;
            t->item = item;
            if (last == nullptr)
            {
                t->next = t;
                last = t;
                return;
            }
            t->next = last->next;
            last->next = t;
            last = t;
        }
};