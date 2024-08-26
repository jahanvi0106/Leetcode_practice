/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:

    void post(Node* n, vector<int> &v){
        if(n==NULL)
            return;
        for(Node* child : n->children){
            post(child,v);
        }
        v.push_back(n->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(root==NULL)
            return ans;
        post(root,ans);
        return ans;
    }
};