#include <bits/stdc++.h>
using namespace std;

// 定义二叉树节点结构
struct TreeNode
{
    int val;         // 节点值
    TreeNode *left;  // 左子节点
    TreeNode *right; // 右子节点

    // 默认构造函数，初始化为 0，左右子节点为空
    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    // 构造函数，初始化节点值，左右子节点为空
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    // 构造函数，初始化节点值，并指定左右子节点
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    /**
     * 判断二叉树中是否存在一条从根节点到叶子节点的路径，使得路径上所有节点的值之和等于 targetSum
     *
     * @param root 指向二叉树根节点的指针
     * @param targetSum 目标路径和
     * @return 如果存在这样的路径返回 true，否则返回 false
     */
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        // 如果当前节点为空，直接返回 false
        if (!root)
            return false;

        // 计算当前路径的剩余目标值
        targetSum -= root->val;

        // 如果当前节点是叶子节点（左右子树都为空），并且路径和刚好等于 targetSum，返回 true
        if (root->left == nullptr && root->right == nullptr && targetSum == 0)
        {
            return true;
        }

        // 递归检查左子树或右子树是否存在满足条件的路径
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
    }
};
