/*
Assignment : 04
Topic : Singly Linked List
02   ||       In Question-1, define a constructor to initialise start pointer with NULL.

*/
#include<iostream>
using namespace std;

struct node
{
    int data;
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
};