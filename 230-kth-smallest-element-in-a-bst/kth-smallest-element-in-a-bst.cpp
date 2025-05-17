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
    void Inorder(TreeNode *root,vector<int>&v){
      if(root==NULL) return;
      Inorder(root->left,v); //call 1
      v.push_back(root->val);
      Inorder(root->right,v); //call 2
}
    int kthSmallest(TreeNode* root, int k) {
       vector<int> v;
       Inorder(root,v); 
       return v[k-1];
    }
};