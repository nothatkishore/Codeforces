#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        long long n, k;
        cin >> n >> k;

        if (n % 2 == 0)
            cout << "YES";
        
        else if(k % 2 != 0)
            cout<<"YES";
        
        else
            cout<<"NO";

        cout << endl;
    }

    return 0;
}