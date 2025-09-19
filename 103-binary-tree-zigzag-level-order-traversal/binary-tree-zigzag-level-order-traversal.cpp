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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*> st;
        st.push(root);
        bool leftToRight = true;
        vector<vector<int>> ans;
        while(!st.empty())
        {
            int n = st.size();
            vector<int> lvl(n);
            for(int i=0; i<n; i++)
            {
                TreeNode* node = st.front();
                st.pop();

                int ind = -1;
                if(leftToRight == true)
                {
                    ind = i;
                }
                else
                {
                    ind = n - 1 - i;
                }

                lvl[ind] = node->val; 

                if(node->left != NULL)
                {
                    st.push(node->left);
                }
                if(node->right != NULL)
                {
                    st.push(node->right);
                }                
            }
            //after this level
            leftToRight = !leftToRight;
            ans.push_back(lvl);
        }
        return ans;
    }
};