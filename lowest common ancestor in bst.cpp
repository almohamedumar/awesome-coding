Node* lca(Node *root,int n1,int n2)
{
    while(root!=NULL)
    {
        if(root->data>n1 && root->data>n2)
        {
            root = root->left;
        }
        if(root->data<n1&& root->data <n2)
        {
            root = root->right;
        }
        else
        {
            break;
        }
    }
    return root;
}