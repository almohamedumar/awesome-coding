#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node *left, *right;
 
    /* Constructor that allocates a new
    node with the given data and NULL
    left and right pointers. */
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
int maximum(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        return max(root->data,max(maximum(root->left),maximum(root->right)));
    }
}
int main()
{
    Node* NewRoot = NULL;
    Node* root = new Node(2);
    root->left = new Node(7);
    root->right = new Node(5);
    root->left->right = new Node(6);
    root->left->right->left = new Node(1);
    root->left->right->right = new Node(11);
    root->right->right = new Node(9);
    root->right->right->left = new Node(4);
    cout<<maximum(root);
}