#include<bits/stdc++.h>
using namespace std;
struct Node
{
    struct Node *left, *right;
    int key;
};
 
// Utility function to create a new tree Node
Node* newNode(int key)
{
    Node *temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
}
Node* lca(Node* root,int n1,int n2)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->key==n1 || root->key == n2)
    {
        return root;
    }
    Node* lca1 = lca(root->left,n1,n2);
    Node* lca2 = lca(root->right,n1,n2);
    if(lca1!= NULL && lca2!= NULL)
    {
        return root;
    }
    if(lca1!=NULL)
    {
        return lca1;
    }
    else
    {
        return lca2;
    }
}
int dlevel(Node *root,int k,int level)
{
    if(root == NULL)
    {
        return -1;
    }
    if(root->key==k)
    {
        return level;
    }
    int left = dlevel(root->left,k,level+1);
    if(left==-1)
    {
        return dlevel(root->right,k,level+1);
    }
    return left;
}
int findDistance(Node* root,int n1,int n2)
{
    Node* l = lca(root,n1,n2);
    int d1= dlevel(l,n1,0);
    int d2= dlevel(l,n2,0);
    return d1+d2;
}
int main()
{
    Node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    cout << "Dist(4, 5) = " << findDistance(root, 4, 5);
    cout << "\nDist(4, 6) = " << findDistance(root, 4, 6);
    cout << "\nDist(3, 4) = " << findDistance(root, 3, 4);
    cout << "\nDist(2, 4) = " << findDistance(root, 2, 4);
    cout << "\nDist(8, 5) = " << findDistance(root, 8, 5);
    return 0;
}