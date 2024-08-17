#include "bits/stdc++.h"
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> list(N);
    for (int i = 0; i < N; i++)
        cin >> list[i];

    int MIN_POS = INT_MAX, MAX_NEG = INT_MIN;

    for (auto x : list)
    {
        if (x > 0)
        {
            if (x < MIN_POS)
                MIN_POS = x;
        }
        else if (x < 0)
        {
            if (x > MAX_NEG)
                MAX_NEG = x;
        }
        else
        {
            cout << 0 << endl;
            return 0;
        }
    }

    int result = INT_MAX;
    if (MIN_POS != INT_MAX)
        result = min(result, MIN_POS);
    if (MAX_NEG != INT_MIN)
        result = min(result, abs(MAX_NEG));

    cout << result << endl;

    return 0;
}
