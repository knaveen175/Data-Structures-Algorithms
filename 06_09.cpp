/*
Assignment : 06
Topic : Circular Linked List
09  ||       In-Question 1, define a method to delete a specific node.

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
        void Delete_First_Node()
        {
            if (last == nullptr)
                return;
            if (last->next == last)
            {
                delete last;
                last = nullptr;
                return;
            }
            node *t = last->next;
            last->next = t->next;
            delete t;
        }
        void Delete_Last_Node()
        {
            if (last == nullptr)
                return;
            if (last->next == last)
            {
                delete last;
                last = nullptr;
                return;
            }
            node *t = last;
            while (t->next != last)
            {
                t = t->next;
            }
            node *temp = last;
            t->next = last->next;
            last = t;            
            delete temp;
        }
        void Delete_Node(int item)
        {
            if (last == nullptr)
                return;
            if (last->next == last)
            {
                if (last->item == item)
                {
                    delete last;
                    last = nullptr;
                }
                return;
            }
            node *t = last;
            do
            {
                if(t->next->item == item)
                    break;
                t = t->next;
            } while (t->next != last);
            if (t->next->item != item)
                return;
            node *temp = t->next;
            t->next = t->next->next;            
            if (item == last->item)
            last = t;
            delete temp;
        }
};