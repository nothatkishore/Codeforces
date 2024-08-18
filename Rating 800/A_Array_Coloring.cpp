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
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        
        int tot_sum = accumulate(nums.begin(), nums.end(), 0);
        if(tot_sum & 1)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<endl;
    }

    return 0;
}