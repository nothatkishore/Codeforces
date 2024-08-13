#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        int n, min_ops = 0;
        cin>>n;
        string str;
        cin >> str;

        for(int i = 0 ; i < n ; i++)
        {
            if(str[i] == '.')
            {
                if(str[i - 1] == '.' && str[i + 1] == '.' && i > 0)
                {
                    min_ops = 2;
                    break;
                }

                min_ops++;
            }
        }

        cout<<min_ops<<endl;
    }

    return 0;
}