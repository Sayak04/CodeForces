/*    AUTHOR :- Sayak Ghosh(Username - sayak04)    * /
/*    College- JGEC   */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define MOD 10000007
#define pb emplace_back
                     
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll dig(ll num) {
    ll sum = 0, rem = 0;
    while (num > 0) {
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }
    return sum;
}
int most_significant_bit(ll n) {
    int pos = 0, temp = 0;
    while(n>0) {
        if(n&1>0)
            pos = temp;
        temp++;
        n = n >> 1;
    }
    return pos;
}
void solve() {
    string s;
    cin >> s;
    ll n = s.length();
    ll two = 0, zero = 0, sum = 0;
    for (ll i = 0; i < n; i++) {
        sum += s[i] - '0';
        if(s[i]=='0')
            zero++;
        if((s[i]-'0')%2==0)
            two++;
    }
    if(sum%3==0 && zero>0 && two>1)
        cout << "red" << endl;
    else
        cout << "cyan" << endl;
}
                
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
auto start = std::chrono::system_clock::now() ;
   
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
// -----for run-time calculation -------//
auto end = std::chrono::system_clock::now();
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
#ifndef ONLINE_JUDGE
cout<<"RUN TIME : "<<elapsed_seconds.count()<<"s"<<endl;
#endif
//---------//
    return 0;
}
