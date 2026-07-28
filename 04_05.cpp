/*
Assignment : 04
Topic : Singly Linked List
05   ||       In Question-1, define a method to search a node with the give item.

*/
#include<iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};

class SLL
{
    private:
        node *start;
    public:
        SLL()
        {
            start = nullptr;
        }
        void insert_at_beginning(int data)
        {
            node *p = new node;
            p->item = data;
            p->next = start;
            start = p;
        }
        void insert_at_end(int data)
        {
            node *p = new node;
            p->item = data;
            p->next = nullptr;
            
            if (start == nullptr)
            {
                start = p;
                return;
            }
            node *t = start;
            while (t->next != nullptr)
            {
                t = t->next;
            }
            t->next = p;
        }
        node* search_node(int item)
        {
            node *t = start;
            while (t != nullptr)
            {
                if (t->item == item)
                {
                    return t;
                }
                t = t->next;
            }
            return nullptr;
        }
};