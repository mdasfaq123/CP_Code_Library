#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define f0(i, n) for(ll i = 0; i < n; i++)
#define f1(i, n) for(ll i = 1; i <= n; i++)
#define testcase ll t; cin >> t; while(t--)
#define testcase1 ll t; t = 1; while(t--)
struct info
{
    string name;
    int roll;
    int mid1;
    int mid2;
    int mark;
    void input()
    {
        cin >> name;
        cin >> roll;
        //cin >> mark;
        cin >> mid1;
        cin >> mid2;
    }
    void output()
    {
        cout << name << endl;
        cout << roll << endl;
        cout << mark << endl;
        //cout << mid1 << endl;
        //cout << mid2 << endl;
    }
    void calc()
    {
        mark = max(mid1, mid2);
    }
};
bool cmp(info x, info y)
{
    if(x.mark < y.mark) return true;
    return false;
}
void solve()
{
    //info student;
    //cin >> student.name;
    //cin >> student.roll;
    //cin >> student.mark;
    //cout << student.name << " " << student.roll << " " << student.mark << endl;
    //vector < info > student(5);
    //for(ll i = 0; i < student.size(); i++)
    //{
    //    cout << "Enter Student " << i + 1 << " " << "Info" << endl;
    //    cin >> student[i].name >> student[i].roll >> student[i].mark;
    //}
    //for(ll i = 0; i < student.size(); i++)
    //{
    //    cout << "Student Info " << i + 1 << " : " << endl;
    //    cout << student[i].name  << " " << student[i].roll << " " << student[i].roll << endl;
    //}
    info st1, st2;
    st1.input();
    st1.calc();
    st2.input();
    st2.calc();
    //st1.output();
    //st2.output();
    //if(st1.mark < st2.mark)
    //{
    //    cout << "Rahi" << endl;
    //}
    //else
    //{
    //    cout << "Asfaq" << endl;
    //}
    if(cmp(st1, st2))
    {
        cout << st2.name << endl;
    }
    else
    {
        cout << st1.name << endl;
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}