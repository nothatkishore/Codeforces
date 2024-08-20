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
        vector<int> nums(n), nums1(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        
        // reverse(nums.begin(), nums.end());
        for(int x : nums)
            cout<< n + 1  - x <<" ";      

        cout<<endl;
    }

    return 0;
}
