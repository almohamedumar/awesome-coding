int prev = INT_MIN;
bool isbst(Node *root)
{
    if(root==NULL)
    {
        return true;
    }
    if(isbst(root->left)==false)
    {
        return false;
    }
    if(root->key<=prev)
    {
        return false;
    }
    prev = root->key;
    return isbst(root->right);
}