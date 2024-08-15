#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        
        bool flag = false;
        for(auto x : nums)
            if(x == k)
                flag = true;
        //hello
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
