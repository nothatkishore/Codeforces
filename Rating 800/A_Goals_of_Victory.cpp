#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        int teams, sum = 0;
        cin>>teams;

        vector<int>vi(teams);
        for(int i = 0 ; i < teams - 1 ; i++)
        {
            cin>>vi[i];
            sum += vi[i];
        }

        cout<<sum * -1<<endl;
    }

    return 0;
}