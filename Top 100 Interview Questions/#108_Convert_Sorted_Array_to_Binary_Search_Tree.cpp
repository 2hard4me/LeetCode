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
    TreeNode* helper(vector<int>&v, int l, int r){
        if(l > r) return NULL;
        int mid = (l+r)/2;
        TreeNode* tree = new TreeNode(v[mid]);
        tree->left = helper(v,l,mid-1);
        tree->right = helper(v,mid+1,r);
        return tree;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size() - 1);
    }
};
