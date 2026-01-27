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
const ll N = 1e5+123, mod = 998244353;
ll fibo[N];
void pre()
{
    fibo[0] = 0, fibo[1] = 1, fibo[2] = 1;
    for(ll i = 3; i < N; i++)
    {
        fibo[i] = ((fibo[i-1] % mod) + (fibo[i-2] % mod)) % mod;
    }
}
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    pre();
    ll n; cin >> n;
    cout << fibo[n] << endl;
    return 0;
}
