/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    vector<int> v;
    TreeNode *target;
    int k;
public:
    void print(TreeNode *node,int dist)
    {
        if(node==NULL || k<0)
        {
            return;
        }
        if(dist==0)
        {
            v.push_back(node->val);
            return;
        }
        else
        {
            print(node->left,k-1);
            print(node->right,k-1);
        }
    }
    int printk(TreeNode *root)
    {
        if(root == NULL)
        {
            return -1;
        }
        if(root == target)
        {
            print(root,k);
            return 0;
        }
        
        int dl = printk(root->left);
        if(dl!= -1)
        {
            if(dl+1==k)
            {
                v.push_back(root->val);
            }
            else
            {
                print(root->right,k-dl-2);
            }
            return 1+dl;
        }
        
        int dr = printk(root->right);
        if(dr!=-1)
        {
            if(dr+1==k)
            {
                v.push_back(root->val);
            }
            else
            {
                print(root->left,k-dr-2);
            }
            return 1+dr;
        }
        return -1;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        this->target = target;
        this->k = k;
        printk(root);
        return v;
    }
};