#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        int sum1 = accumulate(arr.begin(), arr.begin() + n/2 + 1, 0);
        int sum2 = accumulate(arr.begin() + n/2 + 1, arr.end(), 0);

        if(sum1 == sum2)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    return 0;
}