/*
Assignment : 05
Topic : Doubly Linked List
08  ||       In Question-1, define a method to delete last node from the list.

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
        node* Search_Node(int item)
        {
            if (start == nullptr)
                return nullptr;
            node *t = start;
            if (t->item == item) 
                return t;
            while(t->next != nullptr)
            {
                t = t->next;
                if (t->item == item) 
                    return t;
            }
            return nullptr;
        }
        void Insert_after(int position, int item)
        {
            if (start == nullptr)
                return;
            node *t = start;
            while (t != nullptr && t->item != position)
            {
                t = t->next;
            }
            if(t == nullptr)
                return;
            node *temp = new node;
            temp->prev = t;
            temp->item = item;
            if (t->next != nullptr)
            {    
                temp->next = t->next;

                t->next->prev = temp;
            }
            else
                temp->next = nullptr;
            t->next = temp;
        }
        void Delete_First_Node()
        {
            if (start == nullptr)
                return;
            if(start->next == nullptr)
            {    
                delete start;
                start = nullptr;
                return;
            }
            node *t = start;
            t->next->prev = nullptr;
            start = t->next;
            delete t;
        }
        void Delete_Last_Node()
        {
            if (start == nullptr)
                return;
            node *t = start;
            if(start->next == nullptr)
            {
                delete start;
                start = nullptr;
                return;
            }
            while (t->next != nullptr)
            {
                t = t->next;
            }
            t = t->prev;
            delete t->next;
            t->next = nullptr;
        }
};