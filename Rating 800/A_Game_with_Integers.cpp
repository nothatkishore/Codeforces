#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        int number, turn = 0;
        cin >> number;

        while (turn < 10)
        {
            if (number % 3 == 0)
            {
                cout << "Second\n";
                break;
            }

            if (!(turn & 1))
            {
                if ((number + 1) % 3 == 0)
                    number++;
                else
                    number--;
            }

            if (number % 3 == 0)
            {
                cout << "First\n";
                break;
            }

            turn++;
        }
    }

    return 0;
}