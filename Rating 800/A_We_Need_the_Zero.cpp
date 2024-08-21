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
    int n, x = 0;
    cin >> n;
    bool flag = false;
    vi nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        x ^= nums[i];
    }

    if((n & 1))
        cout<<x;
    else
    {
        if(x == 0)
            cout<<nums[0];
        else
            cout<<-1;
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
