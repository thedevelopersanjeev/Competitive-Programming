int solveUtil(const vector<vector<int>> &matrix, vector<vector<int>> &dp, int i, int j, int n, int m) {
	if (i < 0 || j < 0 || i >= n || j >= m) {
		return 0;
	}
	if (dp[i][j] != -1) {
		return dp[i][j];
	}
	int x = solveUtil(matrix, dp, i + 1, j, n, m);
	int y = solveUtil(matrix, dp, i, j + 1, n, m);
	return dp[i][j] = matrix[i][j] + max(x, y);
}

int solve(vector<vector<int>> &matrix) {
	int n = matrix.size(), m = matrix[0].size();
	vector<vector<int>> dp(n, vector<int>(m, -1));
	return solveUtil(matrix, dp, 0, 0, n, m);
}