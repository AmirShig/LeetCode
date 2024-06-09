/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
    public int maxDepth(TreeNode root) {
        if (root == null) return 0;
        int result = 1;
        TreeNode currentNode = root;
        result += Math.max(depthSearch(root.left), depthSearch(root.right));
        return result;
    }
    
    public int depthSearch(TreeNode node) {
        if (node == null) return 0;
        int left = 1;
        int right = 1;
        if (node.left != null) {
            left += depthSearch(node.left);
        }
        if (node.right != null) {
            right += depthSearch(node.right);
        }
        return Math.max(left, right);
    }
}