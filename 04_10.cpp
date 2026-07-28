/*
Assignment : 04
Topic : Singly Linked List
10  ||       In Question-1, define a destructor to deallocates the memory for all the nodes in the linked list.

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
        ~SLL()
        {
            while(start != nullptr)
            {
                Delete_first_node();
            }
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
        void insert_after(int position, int item)
        {
            node *t = start;
            while (t != nullptr)
            {
                if (t->item == position)
                {
                    node *temp = new node;
                    temp->item = item;
                    temp->next = t->next;
                    t->next = temp;
                    return;
                }
                t = t->next;
            }
        }
        void Delete_first_node()
        {
            if (start != nullptr)
            {
                node *t = start->next;
                delete start;
                start = t;
            }    
        }
        void Delete_last_node()
        {
            if (start == nullptr)
                return;
            if (start->next == nullptr)
            {
                delete start;
                start = nullptr;
                return;
            }
            node *t = start;
            while (t->next->next == nullptr)
            {
                t = t->next;
            }            
            delete t->next;
            t->next = nullptr;
        }
        void Delete_node(int item)
        {
            if (start == nullptr)
                return;
            if (start->item == item)
            {
                if (start->next != nullptr)
                {  
                    node *x = start->next;
                    delete start;
                    start = x;
                    return;
                }
                else
                {
                    delete start;
                    start = nullptr;
                    return;
                }
            }
            if(start->next->item == item)
            {
                node *x = start->next->next;
                delete start->next;
                start->next = x;
                return;
            }
            node *t = start;
            while (t->next->item != item)
            {
                t = t->next;
                if (t->next == nullptr)
                    return;
            }
            node *x = t->next->next;
            delete t->next;
            t->next = x;
        }
};