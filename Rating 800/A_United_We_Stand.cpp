#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        int len;
        cin >> len;
        vector<int> nums(len);
        for (int i = 0; i < len; i++)
            cin >> nums[i];

        map<int, int> mpp;
        for (int x : nums)
            mpp[x]++;

        if (mpp.size() == 1)
            cout << -1 << endl;

        else
        {
            vector<int> nums1, nums2;
            int maxElem = rbegin(mpp)->first;
            int frequency = rbegin(mpp)->second;
            for (int i = 0; i < frequency; i++)
                nums1.push_back(maxElem);

            mpp.erase(maxElem);
            for (auto x : mpp)
            {
                for (int i = 0; i < x.second; i++)
                    nums2.push_back(x.first);
            }

            cout << nums2.size() << " " << nums1.size() << endl;
            for (int x : nums2)
                cout << x << " ";
            cout << endl;
            for (int x : nums1)
                cout << x << " ";
            cout<<endl;
        }
    }

    return 0;
}