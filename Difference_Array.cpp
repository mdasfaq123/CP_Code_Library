#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	vector < int > dif(n+2);
	int q; cin >> q;
	while(q--)
	{
		int l, r; cin >> l >> r;
		dif[l]++;
		dif[r+1]--;
	}
	for(int i = 1; i <= n; i++)
	{
		dif[i] += dif[i-1];
		cout << dif[i] << " ";
	}
	cout << endl;
	return 0;

}
/*
Input :
5
3
1 2
1 4
2 3

Output :
2 3 2 1 0 
*/
