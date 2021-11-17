/* AUTHOR:- Sayak Ghosh(Username-sayak04) */
/* College- JGEC */
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
int main()
{
    int t;
    cin >> t;
    int n;
    while(t--) {
        cin >> n;
        ll sum = 0, ans = 0;
        for (int i = 2; i <= 29; i++) {
            sum = pow(2, i) - 1;
            if(n%sum==0) {
                ans = n / sum;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
