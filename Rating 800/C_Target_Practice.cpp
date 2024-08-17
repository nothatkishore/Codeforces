#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> points =
{
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
	{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
	{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
	{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
	{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
	{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
	{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
	{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};


int main()
{
	int tests;
	cin >> tests;

	while (tests--)
	{
		vector<string> result;
		string str;
		for (int i = 0; i < 10; i++)
		{
			cin>>str;
			result.push_back(str);
		}

		int point = 0;
		for(int i = 0 ; i < 10 ; i++)
		{
			for(int j = 0 ; j < 10 ; j++)
			{
				if(result[i][j] == 'X')
					point += points[i][j];
			}
		}

		cout<<point<<endl;
	}	
	return 0;
}