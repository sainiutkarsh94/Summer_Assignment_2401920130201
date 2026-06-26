/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool helper(TreeNode* node, long minValue, long maxValue) {
        if (!node)
            return true;

        if (node->val <= minValue || node->val >= maxValue)//(forrightsubtree||forleftsubtree)
            return false;
        return helper(node->left, minValue, node->val) &&
               helper(node->right, node->val, maxValue);
    }
    bool isValidBST(TreeNode* root) { return helper(root, LONG_MIN, LONG_MAX); }
};