/*
Assignment : 06
Topic : Circular Linked List
02  ||       In-Question 1, define a constructor to initialise last pointer with NULL.

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
};