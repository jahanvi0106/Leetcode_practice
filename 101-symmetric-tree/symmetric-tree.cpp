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
   
    bool isSubSym(TreeNode* r1, TreeNode* r2){
        if(r1==NULL && r2==NULL)
            return 1;
        if (r1 && r2 && r1->val == r2->val) 
            return isSubSym(r1->left, r2->right) && 
                    isSubSym(r1->right, r2->left); 
        return false; 
    }
    
    bool isSymmetric(TreeNode* root)
    {
        return isSubSym(root, root);
    }
};