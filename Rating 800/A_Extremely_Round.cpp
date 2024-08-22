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


set<int> st;
bool check(int num)
{
    string str = to_string(num);
    int count = 0;
    for(char x : str)
    {
        if(x != '0')
            count++;
    }

    if(count > 1)
        return false;
    return true; 
}

void solve()
{
    int n, count = 0;
    cin >> n;

    for(int x : st)
    {
        if(x <= n)
            count++;
    }

    cout<<count<<endl;
}

int main()
{
    for (int i = 1; i < 1e7; i++)
    {
        if (check(i))
            st.insert(i);
    }
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
