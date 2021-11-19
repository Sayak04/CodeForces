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
bool check_if_all_equal(unordered_map<int, int> mpp) {
    for(auto it:mpp) {
        if(it.second!=it.first)
            return false;
    }
    return true;
}
void solve() {
    int n;
    cin >> n;
    int arr[n];
    loop(i,n) {
        cin >> arr[i];
    }
    int points[n + 1][n];
    for (int i = 0; i < n; i++)
        points[0][i] = arr[i];
    for (int i = 1; i <= n; i++) {
        map<int, int> mpp;
        for (int j = 0; j < n; j++) {
            mpp[arr[j]]++;
        }
        for (int j = 0; j < n; j++) {
            arr[j] = mpp[arr[j]];
            points[i][j] = arr[j];
        }
    }
    int q;
    cin >> q;
    while(q--) {
        int x, k;
        cin >> x >> k;
        if(k<=n)
            cout << points[k][x - 1] << endl;
        else
            cout << points[n][x - 1] << endl;
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
