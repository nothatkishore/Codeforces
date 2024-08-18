#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (c & 1)
        {
            if (b > a)
                cout << "Second";
            else
                cout << "First";
        }

        else
        {
            if (a > b)
                cout << "First";
            else
                cout << "Second";
        }

        cout << endl;
    }

    return 0;
}
