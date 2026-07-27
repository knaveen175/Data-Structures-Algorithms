/*
Assignment : 05
Topic : Doubly Linked List
03  ||       In Question-1, define a method to insert a data into the list at the beginning.

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
};