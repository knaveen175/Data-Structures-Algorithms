/*
Assignment : 06
Topic : Circular Linked List
05  ||       In-Question 1, define a method to search a node with the given item.

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
        bool Search_Node(int item)
        {
            if(last == nullptr)
                return false;
            node *t = last;
            do
            {
                if(t->item == item)
                    return true;
                t = t->next;
            }while(t != last);
            return false;
        }
// True means a node with given item is found, false means not found.
};