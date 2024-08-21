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
    int n;
    cin>>n;
    vi nums(n);
    for(int i = 0 ; i < n ; i++)
        cin>>nums[i];
    bool yes = false;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
            if(__gcd(nums[i], nums[j]) <= 2)
            {
                yes =  true;
                break;
            }
    }

    if(yes)
        cout<<"Yes";
    else
        cout<<"No";
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
