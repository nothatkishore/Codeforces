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
    int n;
    cin>>n;
    int temp = 0;
    if(n & 1)
    {
        while(n > 0)
        {
            temp += n;
            n = n - 2;
        }

        while(n > 1)
        {
            temp -= (n - 1);
            n = (n - 3);
        }
    }

    else
    {

    }
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
