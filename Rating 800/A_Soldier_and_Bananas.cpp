#include <bits/stdc++.h>
using namespace std;

// Optimistic macros
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define key first
#define val second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(x) (x).begin(), (x).end()
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const ll MOD = 1e9 + 7;

void solve()
{
    int k, n, w;
    cin >> k >> n >> w;

    int cost = (((w * (w + 1))/2) * k) - n;
    if(cost < 0)
        cout<<0;
    else
        cout<<cost; 
}

int main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
