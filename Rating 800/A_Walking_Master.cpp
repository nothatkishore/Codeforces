#include <bits/stdc++.h>
using namespace std;

// Optimistic macros
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(x) (x).begin(), (x).end()
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b > d)
        cout << -1;
    else
    {
        if (a + (d - b) < c)
            cout << -1;
        else
        {
            cout << 2 * (d - b) + (a - c);
        }
    }

    cout << endl;
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
