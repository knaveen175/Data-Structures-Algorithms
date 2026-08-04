/*
Assignment : 07
Topic : Circular Doubly Linked List
07  ||       In Question-1, define a method to delete first node from the list.

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
        void Insert_at_end(int item)
        {
            node *temp = new node;
            temp->item = item;
            if(start == nullptr)
            {
                temp->next = temp;
                temp->prev = temp;
                start = temp;
                return;
            }
            node *t = start->prev;
            t->next = temp;
            temp->prev = t;
            temp->next = start;
            start->prev = temp;
        }
        node* Search_node(int item)
        {
            if (start == nullptr)
                return nullptr;
            node *t = start;
            if(t->next == t)
            {
                if(t->item == item)
                    return t;
                return nullptr;
            }
            do
            {
                if (t->item == item)
                    return t;
                t = t->next;
            } while (t->next != start);
            if(t->item == item)
                return t;
            return nullptr;
        }
        void Insert_after(int position, int item)
        {
            if(start == nullptr)
                return;
            node *t = start;
            do
            {
                if(t->item == position)
                    break;
                if(t->next == start)
                    return;
                t = t->next;
            } while (t->item != position);
            node *temp = new node;
            temp->item = item;
            temp->next = t->next;
            temp->prev = t;
            t->next = temp;
            temp->next->prev = temp;
        }
        void Delete_first_node()
        {
            if(start == nullptr)
                return;
            if(start->next == start)
            {
                delete start;
                start = nullptr;
                return;
            }
            node *temp = start;
            start->prev->next = start->next;
            start->next->prev = start->prev;
            start = start->next;
            delete temp;
        }
};