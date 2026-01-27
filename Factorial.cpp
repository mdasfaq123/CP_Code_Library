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
const ll N = 1e5 + 123, mod = 998244353;
ll fac[N];
void pre()
{
    fac[0] = 1;
    for(ll i = 1; i < N; i++)
    {
        fac[i] = fac[i-1] * i % mod;
    }
}
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    pre();
    ll n; cin >> n;
    cout << fac[n] << endl;
}
