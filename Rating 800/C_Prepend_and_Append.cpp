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
    string str;
    cin>>str;

    int left = 0, right = n - 1;
    while(str[left] != str[right])
    {
        left++;
        right--;
    }
    if(right - left + 1 < 1)
        cout<<0;
    else
        cout<<right - left + 1;
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
