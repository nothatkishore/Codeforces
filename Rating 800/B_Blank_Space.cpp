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

        int pointer = 0, max_len = 0, curr_len = 0;

        while (pointer < nums.size())
        {
            if (nums[pointer] == 0)
                curr_len++;
            else
                curr_len = 0;
            max_len = max(max_len, curr_len);
            pointer++;
        }

        cout << max_len << endl;
    }

    return 0;
}