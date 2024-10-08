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
    int n, operations = 0;
    cin>>n;
    vi nums(n);
    for(int i = 0 ; i < n ; i++)
        cin>>nums[i];
    
    int ptr1 = 0, ptr2 = 1;
    while (ptr2 < n)
    {
        if(((nums[ptr1] ^ nums[ptr2]) & 1) == 0)
            operations++;
        ptr1++;
        ptr2++;
    }
    cout<<operations<<endl;
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
