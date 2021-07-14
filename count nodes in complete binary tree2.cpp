#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *left, *right;
 
    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};
int countnum(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    int l=0,r=0;
    Node*curr = root;
    while(curr!= NULL)
    {
        l++;
        curr = curr->left;
    }
    curr = root;
    while(curr!=NULL)
    {
        r++;
        curr= curr->right;
    }
    if(l==r)
    {
        int res = pow(2,l)-1;
    }
    else
    {
        return 1+ countnum(root->left) + countnum(root->right);
    }
}
int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(25);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
 
    cout<<countnum(root);
}