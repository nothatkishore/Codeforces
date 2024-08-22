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
    ll n, count = 0, temp;
    cin >> n;
    vll nums;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 2)
        {
            count++;
            nums.push_back(i + 1);
        }
    }

    if (count & 1)
        cout << -1;
    else
    {
        if (count == 0)
            cout << 1;
        else
            cout << nums[(nums.size() / 2) - 1];
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
