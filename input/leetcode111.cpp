
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        if (!root->left)
            return 1 + minDepth(root->right);
        // 如果左子树为空，则最小深度取决于右子树的深度，加上当前 root 这层 1。
        // 如果右子树为空，同理，最小深度取决于左子树的深度，加 1。 if (!root->right) return 1 + minDepth(root->left);
        //  当 root 既有左子树也有右子树时，递归求左右子树的最小深度，取较小值，并加 1 计算当前层。
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};