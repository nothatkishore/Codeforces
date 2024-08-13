#include "bits/stdc++.h"
using namespace std;

int main()
{
   int tests;
   cin >> tests;

   while (tests--)
   {
      int n;
      cin>>n;
      vector<int>sample(n);
      for(int i = 0 ; i < n ; i++)
         cin>>sample[i];

      unordered_map<int, int>mpp;
      for(int x : sample)
      {
         mpp[x]++;
         if(mpp.size() > 2)
            break;
      }

      if(mpp.size() == 1)
         cout<<"Yes\n";
      else if(mpp.size() == 2)
      {
         if(mpp[sample[0]] == n/2 || mpp[sample[0]] == (n + 1)/2)
            cout<<"Yes\n";
         else
            cout<<"No\n";
      }
      else  
         cout<<"No\n";

   }

   return 0;
}