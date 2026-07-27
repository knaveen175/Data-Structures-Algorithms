/*
Assignment : 05
Topic : Doubly Linked List
01  ||       Define a class DLL to implement doubly linked list data structure with member variable start pointer of type node.

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
        
};