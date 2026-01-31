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
void solve()
{
   ll n; cin >> n;
   vector < ll > v(n);
   for(ll i = 0; i < n; i++)
   {
        cin >> v[i];
   }
   ll k; cin >> k;
   //traditional way
   /*
   for(ll i = 0; i < n-k+1; i++)
   {
        ll mn = LLONG_MAX;
        ll mx = LLONG_MIN;
        for(ll j = i; j < i+k; j++)
        {
            mn = min(mn, v[j]);
            mx = max(mx, v[j]);
        }
        cout << mx << " " << mn << endl;
   }
   */
   set < ll > st;
   for(ll i = 0; i < k; i++)
   {
        st.insert(v[i]);
   }
   cout << *st.begin() << " " << *st.rbegin() << endl;
   for(ll i =  1; i < n-k+1; i++)
   {
        st.erase(v[i-1]);
        st.insert(v[i+k-1]);
        cout << *st.begin() << " " << *st.rbegin() << endl;
   }
}
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    testcase1
    {
        solve();
    }
    return 0;
}
/*
input
7
5 4 1 3 7 9 2
4
output
1 5
1 7
1 9
2 9
*/