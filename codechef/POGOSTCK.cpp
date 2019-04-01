
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];
    int sums = -100000;
    for(int i=0;i<k && i<n;i++)
    {
      int sum  = arr[i];
      for(int j=i+k;j<n;j+=k)
      {
        if(arr[j] < (sum + arr[j]))
        {
          sum +=arr[j];
        }
        else
        sum = arr[j];
      }
      sums = max(sums,sum);
    }
    cout<<sums<< endl;
  }
  //cout << count;
}
