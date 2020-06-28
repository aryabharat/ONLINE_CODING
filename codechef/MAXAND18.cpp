#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(pair<ll,ll>&p1 , pair<ll,ll>&p2)
{
    if(p1.first < p2.first)
        return false;
    else if(p1.first == p2.first)
    {
        if(p1.second > p2.second)
            return false;
    }
    return true;
}

int main() {
  int t;
  cin >> t;
  while(t--)
  {
      int n,k;
      cin >>n >> k;
      ll arr[n];
      std::vector<pair<ll,ll>> mask(31);
      
    for(int i=0;i<n;i++)
        cin >> arr[i];
        
    for(int i=0;i<31;i++)
    {
        int cnt = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[j] & (1 << (i)))
            {
                cnt++;
            }
        }
        mask[i].first = cnt * pow((ll)2,(ll)i);
        mask[i].second = i;
    }
    
    sort(mask.begin(),mask.end(),comp);
    ll ans = 0;
    for(int i=0;i<k;i++)
    {
        // cout << mask[i].second << " " << mask[i].first << endl;
        ans += (1 << (mask[i].second));       
    }
    cout << ans << endl;
    
  }
}
