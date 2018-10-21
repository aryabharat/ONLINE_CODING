#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];
  int cp[n];
  for(int i=0;i<n;i++)
    {cin >>arr[i];
      cp[i]=arr[i];}

  for(int i=0;i<n;i++)
  {
   int j = rand()%n;
   //cout<<j<<" ";
    swap(arr[i],arr[j]);
  }
  for(int i=0;i<n;i++)
      cout << arr[i] <<" ";
      cout<<endl;
      for(int i=0;i<n;i++)
          cout << cp[i] <<" ";

  return 0;
}
