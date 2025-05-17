class Solution {
public:
    TreeNode*iop(TreeNode*root){
        TreeNode*pred=root->left;
        while(pred->right){
            pred=pred->right;
        }
        return pred;
    }
    TreeNode*ios(TreeNode*root){
        TreeNode*pres=root->right;
        while(pres->left){
            pres=pres->left;
        }
        return pres;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
        // leaf node only
        if(root->val == key){
            if(root->left==NULL && root->right==NULL) return NULL;

        // onlly one child
            if(root->left==NULL || root->right==NULL) {
                if(root->left!=NULL) return root->left;
                else return root->right;
            }

            // delete two childrens
            if(root->left!=NULL && root->right!=NULL) {
                TreeNode*pred = iop(root);
                root->val = pred->val;
                root->left = deleteNode(root->left,pred->val);
            }
        }
        else if(root->val > key){
            root->left = deleteNode(root->left,key);
        }
        else{
             root->right = deleteNode(root->right,key);
        }
        return root;
    }
};