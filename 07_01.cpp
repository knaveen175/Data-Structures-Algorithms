/*
Assignment : 07
Topic : Circular Doubly Linked List
01  ||       Define a class CDLL to implement Circular Doubly linked list data structure with member variables start pointer of type node.

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
};