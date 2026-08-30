/*
Assignment : 14
Topic : Tree
02  ||       In Question 1, define a constructor to initialise root pointer with NULL.

*/
#include<iostream>
using namespace std;

struct node
{
    int item;
    node *right;
    node *left;
};

class BST
{
    private:
        node *root;
    public:
        BST()
        {
            root = nullptr;
        }
};