int solve(Node *root,int &k)
{
    if(root == NULL)
    {
        return 0;
    }
    int left = solve(root->left,k);
    if(left)
    {
        return left;
    }
    k--;
    if(k==0)
    {
        return root->val;
    }
    int right = solve(root->left,k);
    return right;
}