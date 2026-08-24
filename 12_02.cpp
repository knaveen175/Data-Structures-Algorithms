/*
Assignment : 12
Topic : Deque
02  ||       In Question 1, define a constructor to initialise member variables.

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
        Deque()
        {
            front = nullptr;
            rear = nullptr;
        }
};