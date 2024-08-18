#include "bits/stdc++.h"
using namespace std;
 
int main()
{
    int tests;
    cin >> tests;
 
    while (tests--)
    {
        // Input
        int len;
        cin >> len;
        vector<int> nums(len);
        for (int i = 0; i < len; i++)
            cin >> nums[i];
 
        // Solve
        
        if(!(is_sorted(nums.begin(), nums.end())))
        {
            cout<<0<<endl;
        }
 
        else
        {
            int min_ops = INT_MAX, index = 0;
            for (int i = 1; i < len - 1; i++)
            {
                if(abs(nums[i + 1] - nums[i]) < min_ops)
                {
                    min_ops = abs(nums[i + 1] - nums[i]);
                    index = i;
                }
            }
 
            int count = 0;
            while(nums[index] <= nums[index + 1])
            {
                nums[index]++;
                nums[index + 1]--;
                count++;
            }
 
            cout << count << endl;
        }
    }
 
    return 0;
}