/*
Assignment : 14
Topic : Tree
03  ||       In Question 1, define a method to check if the tree is empty.

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
        bool Check_Empty()
        {
            if (root == nullptr)
                return true;
            return false;
// True means the tree is empty and false means not empty
        }
};