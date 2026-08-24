/*
Assignment : 12
Topic : Deque
01  ||       Define a class Deque using node type pointers front and rear as member variables. Implement queue using doubly linked list.

*/
#include<iostream>
using namespace std;

struct node
{
    int item;
    node *prev;
    node *next;
};

class Deque
{
    private:
        node *front;
        node *rear;
    public:
};