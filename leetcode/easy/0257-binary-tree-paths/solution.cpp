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
    void solve(TreeNode* root, string path, vector<string>& ans) {
        if (root == NULL)
            return;

        // Current node ko path mein add karo
        if (path.empty())
            path = to_string(root->val);
        else
            path += "->" + to_string(root->val);

        // Agar leaf node hai
        if (root->left == NULL && root->right == NULL) {
            ans.push_back(path);
            return;
        }

        // Left aur right subtree explore karo
        solve(root->left, path, ans);
        solve(root->right, path, ans);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        solve(root, "", ans);
        return ans;
    }
};
