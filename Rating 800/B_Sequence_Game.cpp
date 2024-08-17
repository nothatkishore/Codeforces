#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        // Input
        int b;
        cin >> b;
        vector<int> data(b), result;
        for (int i = 0; i < b; i++)
            cin >> data[i];

        // Solve
        int iter = 2 * b;
        result.push_back(data[0]);
        for (int i = 1; i < b; i++)
        {
            if (data[i - 1] > data[i])
            {
                result.push_back(data[i]);
                result.push_back(data[i]);
            }

            else
            {
                result.push_back(data[i]);
            }
        }

        cout<<result.size()<<endl;
        for(int i = 0 ; i < result.size() ; i++)
            cout<<result[i]<<" ";
        cout<<endl;
    }

    return 0;
}