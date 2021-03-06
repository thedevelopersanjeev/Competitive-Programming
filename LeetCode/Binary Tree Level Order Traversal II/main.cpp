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
	vector<vector<int>> levelOrderBottom(TreeNode *root) {
		if (root == nullptr) {
			return {};
		}
		queue<pair<TreeNode *, int>> q;
		const int M = 10001;
		vector<int> ans[M];
		q.push({root, 0});
		while (!q.empty()) {
			auto curr = q.front();
			q.pop();
			root = curr.first;
			int level = curr.second;
			ans[level].push_back(root->val);
			if (root->left != nullptr) {
				q.push({root->left, level + 1});
			}
			if (root->right != nullptr) {
				q.push({root->right, level + 1});
			}
		}
		vector<vector<int>> fans;
		for (const auto &ele : ans) {
			if (!ele.empty()) {
				fans.push_back(ele);
			}
		}
		reverse(fans.begin(), fans.end());
		return fans;
	}
};