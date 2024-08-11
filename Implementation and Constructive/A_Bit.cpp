#include "bits/stdc++.h"
using namespace std;

int main()
{
    int size;
    cin >> size;

    vector<string> ops(size);
    for (int i = 0; i < size; i++)
        cin>>ops[i];
    
    int number = 0;
    for(auto x : ops)
    {
        if(x == "++X" || x == "X++")
            number++;
        else
            number--;
    }

    cout<<number;

    return 0;
}