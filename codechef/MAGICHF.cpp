#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n,x,s,l,k;
    cin >> n>> x >> s;
    int a[n] ={0};
    a[x-1] = 1;

    while(s--)
    {
      cin >> l >> k;
      swap(a[l-1],a[k-1]);
    }
    for(int i=0;i<n;i++)
    {
      if(a[i]==1)
        {cout <<i+1;break;}
    }
    cout << "\n";
  }
}
