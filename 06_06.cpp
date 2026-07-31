/*
Assignment : 06
Topic : Circular Linked List
06  ||       In-Question 1, define a method to insert a data into the list after the specified node of the list.

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
        void Insert_after(int position, int item)
        {
            if (last == nullptr)
                return;
            node *temp = new node;
            temp->item = item;
            node *t = last;
            do
            {
                if(t->item == position)
                    break;
                t = t->next;
            } while (t != last);
            if(t->item != position)
            {
                delete temp;
                return;
            }
            temp->next = t->next;
            t->next = temp;      
            if (t == last)
                last = temp;
        }
};