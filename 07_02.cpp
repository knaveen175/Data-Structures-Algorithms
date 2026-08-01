/*
Assignment : 07
Topic : Circular Doubly Linked List
02  ||       In Question-1, define a constructor to initialise start pointer with NULL.

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
};