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
    TreeNode* build(const vector<int>& preorder,int preStart, int preEnd,int inStart, int inEnd,const unordered_map<int, int>& inIndex){
        if (preStart > preEnd || inStart > inEnd){
            return nullptr;
        }
        TreeNode* root = new TreeNode(preorder[preStart]);
        int rootIndex = inIndex.at(root->val);
        int leftSize = rootIndex - inStart;
        root->left = build(preorder,
                           preStart + 1, preStart + leftSize,
                           inStart, rootIndex - 1,
                           inIndex);
        root->right = build(preorder,
                            preStart + leftSize + 1, preEnd,
                            rootIndex + 1, inEnd,
                            inIndex);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
        int n = inorder.size();
        unordered_map<int, int> inIndex;
        for (int i = 0; i < n; i++) {
            inIndex[inorder[i]] = i;
        }
        return build(preorder, 0, n - 1, 0, n - 1, inIndex);
    }
};