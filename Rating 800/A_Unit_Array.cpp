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
        
        int count1 = 0, count2 = 0;
        for(int x : nums)
        {
            if(x == 1)
                count1++;
            else
                count2++;
        }
        int ops = 0;
        while(count2 > count1)
        {
            count2--;
            count1++;
            ops++;
        }

        while(count2 % 2 != 0)
        {
            count2--;
            ops++;
        }

        cout<<ops<<endl;

    }

    return 0;
}