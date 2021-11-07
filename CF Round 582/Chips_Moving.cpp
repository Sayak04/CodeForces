/*    AUTHOR : -Sayak Ghosh(Username - sayak04)    * /
/*    College- JGEC   */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 10000007

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll dig(ll num)
{
    ll sum = 0, rem = 0;
    while (num > 0)
    {
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }
    return sum;
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll mini = 1e9 + 1;
    ll temp;
    for (int i = 0; i < n; i++)
    {
        temp = 0;
        for (int j = 0; j < n; j++)
        {
            ll x = a[j] - a[i];
            if (x != 0)
            {
                if (x <= 0)
                {
                    x = x * (-1);
                }
                if (x % 2 != 0)
                    temp++;
            }
        }
        if (temp < mini)
            mini = temp;
    }
    cout << mini;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
