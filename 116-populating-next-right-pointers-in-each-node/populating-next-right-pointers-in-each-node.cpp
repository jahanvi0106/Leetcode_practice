/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:

    Node *getNextRight(Node *p) {

        Node *temp = p->next;
    
        // Keep moving to next sibling until
        // you find a sibling that has at least
        // one children
        while (temp != nullptr) {
            if (temp->left != nullptr)
                return temp->left;
            if (temp->right != nullptr)
                return temp->right;
            temp = temp->next;
        }
    
        return nullptr;
    }
    
    // Function to connect nodes at the same level
    Node* connect(Node *root) {
    
        Node *temp = root;
        if (!temp)
            return nullptr ;
    
        temp->next = nullptr;
        
        while (temp != nullptr) {
            Node *q = temp;
    
            // Traverse all nodes at the current level
            while (q != nullptr) {
                if (q->left) {
    
                    if (q->right)
                        q->left->next = q->right;
                    else
                        q->left->next = getNextRight(q);
                }
    
                if (q->right)
                    q->right->next = getNextRight(q);
                q = q->next;
            }
    
            // Move to the next level starting with the leftmost node
            if (temp->left)
                temp = temp->left;
            else if (temp->right)
                temp = temp->right;
            else
                temp = getNextRight(temp);
        }
        return root;
    }

};