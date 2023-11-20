/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool areValuesValid(TreeNode *root, long long int min, long long int max)
    {
        if (root == NULL)
            return true;
        if (root->val > min and root->val < max)
            return areValuesValid(root->right, root->val, max) and areValuesValid(root->left, min, root->val);
        else
            return false;
    }

    bool isValidBST(TreeNode *root)
    {
        long long int min = -1000000000000, max = 1000000000000;
        return areValuesValid(root, min, max);
    }
};