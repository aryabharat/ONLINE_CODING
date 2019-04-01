
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
     map<int,int> m;
    int n,x;
    cin >> n >> x;
    string s;
     cin >> s;
     int count  = 1;
     m[x]++;
     for(int i=0;i<s.size();i++)
     {
       if(s[i] == 'L')
       {
         x--;
         if(m[x] == 0)
         {
           m[x]++;
           count++;
         }
       }
       else
       {
         x++;
         if(m[x]==0)
         {
           m[x]++;
           count++;
         }
       }
     }
     cout << count <<endl;
  }
  //cout << count;
}
