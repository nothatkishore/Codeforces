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
    vi nums(n);
    for(int i = 0 ; i < n ; i++)
        cin>>nums[i];
    
    if(n == 1)
        cout<<0;
    else
    {
        map<int, int>mpp;
        for(int x : nums)
            mpp[x]++;
        if(mpp.size() == n)
            cout<<n - 1;
        else
        {
            int max_freq = INT_MIN;
            for(auto x : mpp)
                max_freq = max(max_freq, x.val);
            cout<<n - max_freq;
        }
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
