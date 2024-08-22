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
    int n, sum = 0;
    cin>>n;
    vi nums(n);
    for(int i = 0 ; i < n ; i++)
        cin>>nums[i];
    
    if(nums[0] == nums[n - 1])
        cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        cout<<nums[n - 1]<<" ";
        for(int i = 0 ; i < n - 1 ; i++ )
            cout<<nums[i]<<" ";
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
