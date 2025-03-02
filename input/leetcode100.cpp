
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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (!p && !q)
            return true; // 两棵树都为空，相同
        if (!p || !q)
            return false; // 只有一棵树为空，不相同
        if (p->val != q->val)
            return false; // 当前节点值不相同

        // 递归比较左右子树
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};