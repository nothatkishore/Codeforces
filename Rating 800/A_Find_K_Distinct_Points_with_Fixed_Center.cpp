#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        vector<pair<int, int>> points;

        if (k == 1)
        {
            cout<<x<<" "<<y<<endl;
        }

        else if( k & 1)
        {
            points.push_back({x, y});
            for(int i = 1 ; i < k/2 + 1 ; i++)
                cin>>

        }
    }

    return 0;
}