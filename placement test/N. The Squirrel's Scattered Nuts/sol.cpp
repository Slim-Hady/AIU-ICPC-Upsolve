
// this is my template for C++ you can use 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define MOD 1000000007
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl;
#define SlimHady ios::sync_with_stdio(false); cin.tie(0);cout.tie(NULL);
#define INF 1e9


void solve() {
  // ll -> long long
    ll n ; cin >> n;
  // vll -> vector<long long>
    vll arr(n);
    vll odd;
    vll even;
    for (int i = 0 ; i <n ;i++) {
        int a ; cin >> a;
      // a & 1 -> means if a is odd it is like if ( a % 2 != 0 ) 
      // pb -> push_back
        if ( a & 1) odd.pb(a);
        else even.pb(a);
    }
    if (odd.size() == 0 || even.size() == 0) {
        cout << -1 << endl;
        return;
    }
  // all -> arr.begin(), arr.end()
    ll mx = *max_element(all(odd));
    ll mx2 = *max_element(all(even));
    cout << mx + mx2 << endl;
}

int main() {
    SlimHady // fast input and output
  // reading input from files and output reslut to file
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();

    }
    return 0;
}
