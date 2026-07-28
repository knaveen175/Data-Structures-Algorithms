/*
Assignment : 04
Topic : Singly Linked List
03   ||       In Question-1, define a method to insert a data into the list at the beginning.

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
            p->item= data;
            p->next = start;
            start = p;
        }
};