#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> boxes(n);
        for (int i = 0; i < n; i++)
            cin >> boxes[i];
        
        if(k == 1 && !is_sorted(boxes.begin(), boxes.end()))
            cout<<"NO";
        else
            cout<<"YES";
        
        cout<<endl;
    }

    return 0;
}