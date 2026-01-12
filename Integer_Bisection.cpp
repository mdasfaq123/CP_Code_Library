#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define f0(i, n) for(ll i = 0; i < n; i++)
#define f1(i, n) for(ll i = 1; i <= n; i++)
#define testcase ll t; cin >> t; while(t--)
#define testcase1 ll t; t = 1; while(t--)
ll a[] = {1, 3, 4, 4, 6, 7, 9};
bool isOk(int i, int k)
{
    if(a[i] >= k) return 0;
    return 1;
}
void solve()
{
    ll n = 7, k = 7;
    ll l = 0, r = n;
    while(l < r)
    {
        ll mid = (l + r) / 2;
        if(isOk(mid, k))
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << endl;
}
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}