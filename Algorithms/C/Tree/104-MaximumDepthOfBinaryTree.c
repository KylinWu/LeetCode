/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root == NULL)
        return 0;
    int rmax = maxDepth(root->right);
    int lmax = maxDepth(root->left);
    return (rmax > lmax) ? rmax+1 : lmax+1;
}
