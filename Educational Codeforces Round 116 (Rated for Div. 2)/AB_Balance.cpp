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
    int ab = 0, ba = 0;
    int n = s.length();
    for (int i = 1; i < n;i++) {
        if(s[i-1]=='b' && s[i]=='a')
            ba++;
        if(s[i-1]=='a' && s[i]=='b')
            ab++;
    }
    if(ab==ba)
        cout << s << endl;
    else if(ab>ba) {
        for (int i = 0; i < n - 1; i++) {
            if(ab==ba)
                break;
            else if(s[i]=='a' && s[i+1]=='a') {
                s[i] = 'b';
                ba++;
                i++;
            } else if(s[i]=='a' && s[i+1]=='b') {
                s[i] = 'b';
                ab--;
            } 
        }
        cout << s << endl;
    } else {
        for (int i = 0; i < n - 1; i++)
        {
            if (ab == ba)
                break;
            else if (s[i] == 'b' && s[i + 1] == 'b')
            {
                s[i] = 'a';
                ab++;
                i++;
            }
            else if (s[i] == 'b' && s[i + 1] == 'a')
            {
                s[i] = 'a';
                ba--;
            }
        }
        cout << s << endl;
    }
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
