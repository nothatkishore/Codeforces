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
    cin >> n;

    if (n == 1)
        cout << 1;
    else if (!(n & 1))
        cout << -1;
    else
    {
        vi nums;
        int num = n - 1;
        for (int i = 0; i < n / 2; i++)
        {
            nums.pb(num);
            num = num - 2;
        }

        num = 1;
        for (int i = 0; i <= n / 2; i++)
        {
            nums.pb(num);
            num = num + 2;
        }

        for (int x : nums)
            cout << x << " ";
    }

    cout<<endl;
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
