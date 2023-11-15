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
    void searchColumnElements(TreeNode *root, int column, int rows, int k, vector<int> &temp)
    {
        if (column == k)
        {
            temp.push_back(root->val);
        }
        if (root->left != NULL)
            searchColumnElement(root->left, column - 1, row + 1, k, temp);
        if (root->right != NULL)
            searchColumnElement(root->right, column + 1, row + 1, k, temp);
    }

    void particularColumn(TreeNode *root, int column, unordered_set<int> &s, vector<vector<int>> &ans)
    {
        vector<int> temp;
        s.insert(column);
        searchColumnElements(root, column, 0, column, temp);
        ans.push_back(temp);
    }

    void calling(TreeNode *root, unordered_set<int> &s, int column, vector<vector<int>> &ans)
    {
        if (s.find(column) == s.end())
        {
            particularColumn(root, column, s, ans)
        }
        if (root->left != NULL)
        {
            calling(root->left, s, column - 1, ans);
        }
        if (root->right != NULL)
        {
            calling(root->right, s, column + 1, ans);
        }
    }

    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        unordered_set<int> s;
        vector<vector<int>> ans;
        calling(root, s, 0, ans);
        return ans;
    }
};