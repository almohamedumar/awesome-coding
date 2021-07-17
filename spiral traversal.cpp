#include<bits/stdc++.h>
using namespace std;
void traversal(Node *root)
{
    if(root==NULL)
        return;
    queue<Node *> q;
    bool reverse = false;
    stack<int> s;
    q.push(root)
    while(q.empty()==false)
    {
        int count = q.size();
        for(int i=0;i<count;i++)
        {
            Node *curr= q.top();
            q.pop();
            if(reverse)
            {
                s.push(curr->key);
            }
            else
            {
                cout<<curr->key;
            }
            if(curr->left != NULL)
            {
                q.push(curr->left);
            }
            if(curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
        if(reverse)
        {
            while(s.empty()==false)
            {
                cout<<s.top();
                s.pop();
            }
        }
        reverse = !reverse;
    }
}
