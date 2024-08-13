#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> gas_stations(n);
        gas_stations.push_back(0);
        for (int i = 1; i <= n; i++)
            cin >> gas_stations[i];
        
        int min_cap = (x - gas_stations[n]) * 2;

        for(int i = 0 ; i < n; i++)
        {
            if(min_cap < gas_stations[i + 1] - gas_stations[i])
                min_cap = gas_stations[i + 1] - gas_stations[i];
        }

        cout<<min_cap<<endl;
    }

    return 0;
}