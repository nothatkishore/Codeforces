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
    int n, s, m;
    cin >> n >> s >> m;

    vector<bool> nums(m, false);
    vector<vi>intervals(n);
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin>>start>>end;
        vi sample;
        for(int i = start ; i < end ; i++)
        {
            nums[i] = true;
            sample.pb(i);
        }
        intervals.pb(sample);
    }

    vi sample;
    for(int i = 0 ; i < m ; i++)
    {
        if(nums[i] && !(sample.empty()))
        {
            intervals.pb(sample);
            sample.clear();
        }

        else
            sample.pb(i); 
    }

    for(auto x : intervals)
    {
        for(auto y : x)
            cout<<y<<" ";
        cout<<endl;
    }

    // string response = "NO";
    // for(auto x : intervals)
    //     if(x.size() == s)
    //     {
    //         response = "YES";
    //         break;
    //     }
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
