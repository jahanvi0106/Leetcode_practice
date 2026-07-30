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

    void rightDFS(vector<int>& v, int lvl, TreeNode* node) {
        if (!node) return;
        if (v.size() == lvl)
            v.push_back(node->val);

        rightDFS(v, lvl+1, node->right);
        rightDFS(v, lvl+1, node->left);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        rightDFS(ans, 0, root);
        return ans;
    }
};