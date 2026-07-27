/*
Assignment : 05
Topic : Doubly Linked List
02  ||       In Question-1, define a constructor to initialise start pointer with NULL.

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
};