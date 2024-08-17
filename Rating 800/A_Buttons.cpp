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

        if (a == b && b == c)
        {
            if (a & 1)
                cout << "First";
            else
                cout << "Second";
        }

        else if (a > b + c)
            cout << "First";

        else if (c > a + b)
            cout << "Second";
        
        else if (a + b > c)
            cout<<"First"; 
        
        else
            cout<< "Second";

        cout << endl;
    }

    return 0;
}