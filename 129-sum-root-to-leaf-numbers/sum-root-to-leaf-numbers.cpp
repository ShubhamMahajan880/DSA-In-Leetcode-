class Solution {
public:
    void helper(TreeNode* root, int curr, int &sum){
        if(!root) return;
        curr = curr*10 + root->val;
        if(!root->left && !root->right){
            sum += curr;
            return;
        }
        // Using just sic Tree Approaches
        helper(root->left, curr, sum);
        helper(root->right, curr, sum);
    }

    int sumNumbers(TreeNode* root) {
        int sum = 0;
        helper(root, 0, sum);
        return sum;
    }
};
