#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N, ans=0;
	cin >> N;

	vector<int> dp(N), blobnom;

	for (int i = 0; i < N; i++)
	{
		cin >> ans;
		blobnom.push_back(ans);
	}
	for (int i = 1; i < N-1; i++)
	{
		dp[i] = blobnom[i] + min(blobnom[i - 1], blobnom[i + 1]);
		ans = max(ans, dp[i]);
	}
	ans = max(ans, blobnom[0]);
	ans = max(ans, blobnom.back());
	printf("%d", ans);
}