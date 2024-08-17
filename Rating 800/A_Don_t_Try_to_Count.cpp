#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        // Input
        int len1, len2;
        cin >> len1 >> len2;

        string str1, str2;
        cin >> str1 >> str2;

        // Solve
        int count = 0, iteration = 6;
        bool flag = false;
        
        while(iteration--)
        {
            if(str1.find(str2) != string :: npos)
            {
                flag = true;
                break;
            }
            count++;
            str1 += str1;
        }

        if(flag)
            cout<<count<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}