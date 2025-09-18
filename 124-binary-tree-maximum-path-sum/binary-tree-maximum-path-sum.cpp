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
class Solution {
public:
    int sum(TreeNode* node, int& maxi)
    {
        if(node == NULL)
        {
            return 0;
        }

        int leftsum = sum(node->left, maxi);
        if(leftsum<=0)
        {
            leftsum = 0;
        }

        int rightsum = sum(node->right, maxi);
        if(rightsum < 0)
        {
            rightsum = 0;
        }
        maxi = max(maxi, leftsum + rightsum + node->val);

        return node->val + max(leftsum, rightsum);
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        sum(root, maxi);
        return maxi;
    }
};