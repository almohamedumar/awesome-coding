Node *prev = NULL;
Node *btdll(Node *root)
{
    if(root==NULL)
        return root;
    Node *head = btdll(root->left);
    if(prev == NULL)
        head = root;
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    btdll(root->right);
    return head;
}