#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define f0(i, n) for(ll i = 0; i < n; i++)
#define f1(i, n) for(ll i = 1; i <= n; i++)
#define testcase ll t; cin >> t; while(t--)
#define testcase1 ll t; t = 1; while(t--)
const ll INF = 1e18;
void solve()
{
    string a, b;
    cin >> a >> b;
    ll n = a.size();
    ll m = b.size();
    ll lcs_table[n+1][m+1];
    for(ll i = 0; i <= n; i++)
    {
        for(ll j = 0; j <= m; j++)
        {
            if(i == 0 || j == 0) lcs_table[i][j] = 0;
            else if(a[i-1] == b[j-1]) lcs_table[i][j] = lcs_table[i-1][j-1] + 1;
            else lcs_table[i][j] = max(lcs_table[i][j-1], lcs_table[i-1][j]);
        }
    }
    ll i = n, j = m;
    string sub = "";
    ll idx = lcs_table[n][m];
    while(i > 0 && j > 0)
    {
        if(a[i-1] == b[j-1])
        {
            sub += a[i-1];
            i--;
            j--;
            idx--;
        }
        else if(lcs_table[i-1][j] > lcs_table[i][j-1]) i--;
        else j--;
    }
    reverse(sub.begin(), sub.end());
    cout << sub << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll cnt = 0;
    testcase1
    {
        solve();
    }
    return 0;
}
