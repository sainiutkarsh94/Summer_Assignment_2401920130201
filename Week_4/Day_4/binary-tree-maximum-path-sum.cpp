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
    int maxSum;

    int solve(TreeNode* root) {
        if (root == NULL)
            return 0;

        int leftPath = solve(root->left);//l
        int rightPath = solve(root->right);//r

        int pathThroughRoot = leftPath + rightPath + root->val;//neeche hi milgya loop
        int bestSinglePath = max(leftPath, rightPath) + root->val;//ek achaa
        int rootOnly = root->val;//bas root achha

        maxSum = max({maxSum, pathThroughRoot, bestSinglePath, rootOnly});

        return max(bestSinglePath, rootOnly);//bas in dono me hi tendency hi ooper jane ki tree me(1st case to ooper ja hi ni skta)
    }

    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;
        solve(root);
        return maxSum;
    }
};