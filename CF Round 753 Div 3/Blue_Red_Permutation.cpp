/*    AUTHOR :- Sayak Ghosh(Username - sayak04)    * /
/*    College- JGEC   */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define MOD 10000007
#define pb emplace_back

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll dig(ll num)
{
    ll pre = 0, rem = 0;
    while (num > 0)
    {
        rem = num % 10;
        pre += rem;
        num = num / 10;
    }
    return pre;
}
int most_significant_bit(ll n)
{
    int pos = 0, temp = 0;
    while (n > 0)
    {
        if (n & 1 > 0)
            pos = temp;
        temp++;
        n = n >> 1;
    }
    return pos;
}

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    loop(i, n)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    vector<int> blue, red;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
            blue.push_back(arr[i]);
        else if (s[i] == 'R')
            red.push_back(arr[i]);
    }
    sort(blue.begin(), blue.end());
    sort(red.begin(), red.end(),greater<int>());
    bool flag = true;
    for (int i = 0; i < blue.size();i++) {
        if(blue[i]<i+1) {
            flag = false;
        }
    }
    for (int i = 0; i < red.size();i++) {
        if(red[i]>n-i) {
            flag = false;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    auto start = std::chrono::system_clock::now();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // -----for run-time calculation -------//
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
#ifndef ONLINE_JUDGE
    cout << "RUN TIME : " << elapsed_seconds.count() << "s" << endl;
#endif
    //---------//
    return 0;
}
