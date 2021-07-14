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
void printbottom(Node *root,int dis,int lev,auto &map)
{
    if(root==NULL)
    {
        return;
    }
    if(lev>=map[dis].second)
    {
        map[dis] = {root->key,lev};
    }
    printbottom(root->left,dis-1,lev+1,map);
    printbottom(root->right,dis+1,lev+1,map);
}
void print(Node *root)
{
    map<int,pair<int,int>> map;
    printbottom(root,0,0,map);
    for(auto i : map)
    {
        cout<<i.second.first<<" ";
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
 
    print(root);
 
    return 0;
}