#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, x; cin >> n >> x;
	vector < int > v(n+1), p(n+1);
	for(int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	for(int i = 1; i <= n; i++)
	{
		p[i] = p[i-1] + v[i];
	}
	int ans = 0;
	map < int, int > m;
	m[p[0]]++;
	for(int r = 1; r <= n; r++)
	{
		int val = p[r] - x;
		ans += m[val];
		m[p[r]]++;
	}
	cout << ans << endl;
	return 0;
}