class Solution {
public:
    void Inoreder(TreeNode*root,vector<int>&ans){
        if(root==NULL) return;
        Inoreder(root->left,ans);
        ans.push_back(root->val);
        Inoreder(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        Inoreder(root,ans);
        for(int i=1;i<ans.size();i++){
            if(ans[i]<=ans[i-1]) return false;
        }
        return true;
    }
};