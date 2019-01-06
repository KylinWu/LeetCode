/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isUnivalTree(struct TreeNode* root) {
    if (root == NULL) return true;
    if (root->left) {
        if (root->left->val != root->val) 
            return false;
    }
    
    if (root->right) {
        if (root->right->val != root->val)
            return false;
    }
    
    if (isUnivalTree(root->left)) {
        if (isUnivalTree(root->right))
            return true;
    }
    return false;
}
