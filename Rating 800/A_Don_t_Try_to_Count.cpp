#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        int mainLen, subLen;
        cin>>mainLen>>subLen;

        string mainStr, subStr;
        cin>>mainStr>>subStr;

        int count = 0, temp = 6;
        bool flag = false;

        while(temp--)
        {
            if(mainStr.find(subStr) != string :: npos)
            {
                flag = true;
                break;
            }
            count++;
            mainStr += mainStr;
        }

        if(flag)
            cout<<count<<endl;
        else
            cout<<-1<<endl;

    }

    return 0;
}