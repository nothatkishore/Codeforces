#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        int N;
        cin >> N;
        vector<int> perms(N);
        for (int i = 0; i < N; i++)
            cin>>perms[i];
        
        for(int i = 1 ; i < N - 1 ; i++)
        {
            if(perms[i - 1] < perms[i] && perms[i + 1] < perms[i])
                swap(perms[i], perms[i + 1]);
        }

        if(perms[0] != 1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}