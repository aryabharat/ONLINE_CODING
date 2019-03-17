#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ull unsigned long long
int main()
{
    ull n,k;cin>>n>>k;
    vector <ull> v(n);
    for(ull i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
   ull temp=999999999;
for(ull i=0;i<=n-k;i++)
{
 temp=min(temp,v[i+k-1]-v[i]);
}
    cout<<temp;

    return 0;
}
