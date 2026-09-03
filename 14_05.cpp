/*
Assignment : 14
Topic : Tree
05  ||       In Question 1, define a method for preorder traversing of BST.

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
        void Insert(int data)
        {
            node *t = root;
            node *temp = new node;
            temp->item = data;
            temp->left = nullptr;
            temp->right = nullptr;
            
            if (root == nullptr)
            {
                root = temp;
                return;
            }
            while (1)
            {
                if(t->item > data)
                {
                    if(t->left == nullptr)
                    {
                        t->left = temp;
                        return;
                    }
                    t = t->left;
                }    
                if(t->item < data)
                {
                    if (t->right == nullptr)
                    {
                        t->right = temp;
                        return;
                    }
                    t = t->right;
                }
            }
        }
        void Preorder(node *t)
        {
            if(t != nullptr)
            {
                cout<<t->item<<" ";
                Preorder(t->left);
                Preorder(t->right);
            }
        }
};