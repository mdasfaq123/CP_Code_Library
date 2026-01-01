#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector < int > v(n + 1);
	for(int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	vector < int > pre_sum(n + 1);
	for(int i = 1; i <= n; i++)
	{
		pre_sum[i] = pre_sum[i - 1] + v[i];
	}
	int ans = LLONG_MIN, mn = 0;
	for(int r = 1; r <= n; r++)
	{
		int add = pre_sum[r];
		int sub = mn;
		ans = max(ans, add - sub);
		mn = min(mn, pre_sum[r]);
	}
	cout << ans << endl;
	return 0;
}