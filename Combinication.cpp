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
const ll N = 1e6+123, mod = 1e9+7;
ll fac[N], ifac[N];
ll power(ll x, ll n)
{
    ll ans = 1 % mod;
    while(n > 0)
    {
        if(n & 1) ans = ans * x % mod;
        x = x * x % mod;
        n >>= 1;
    }
    return ans;
}
ll inverse(ll a)
{
    return power(a, mod - 2);
}
void pre()
{
    fac[0] = 1;
    for(ll i = 1; i < N; i++)
    {
        fac[i] = fac[i-1] * i % mod;
    }
    for(ll i = 1; i < N; i++)
    {
        ifac[i] = inverse(fac[i]);
    }
}
ll nCr(ll n, ll r)
{
    if(n < r) return 0;
    return fac[n] * ifac[r] % mod * ifac[n-r]  % mod;
}
ll nPr(ll n, ll r)
{
    if(n < r) return 0;
    return fac[n] * ifac[n-r] % mod;
}
void solve()
{
    ll q; cin >> q;
    while(q--)
    {
        ll n, r; cin >> n >> r;
        cout << nCr(n, r) << endl;
        cout << nPr(n, r) << endl;
    }
}
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    pre();
    solve();
    return 0;
}