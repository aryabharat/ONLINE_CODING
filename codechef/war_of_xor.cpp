#include<bits/stdc++.h>
int xorPairCount(int arr[], int n, int x)
{
    int result = 0; // Initialize result

    // create empty map that stores counts of
    // individual elements of array.
    unordered_map<int, int> m;

    for (int i=0; i<n ; i++)
    {
        int curr_xor =  x^arr[i];

        // If there exist an element in map m
        // with XOR equals to x^arr[i], that means
        // there exist an element such that the
        // XOR of element with arr[i] is equal to
        // x, then increment count.
        if (m.find(curr_xor) != m.end())
            result += m[curr_xor];

        // Increment count of current element
        m[arr[i]]++;
    }


    // return total count of pairs with XOR equal to x
    return result;
}

int main()
{
int t;
cin >> t;
  while(t--)
  {
      int n;
      cin >> n;
      int a[n];
      int e,o;
      for(int i=0;i<n;i++)
      {
         cin >> a[i];
         if(a[i]%2==0)
          e++;
          else
          o++;
      }
      int count=0;
      count += (e(e-1))/2;
      count += (o(o-1))/2;
      int extra = xorPairCount(arr, n, x);
      count -=extra;
      cout << extra;
  }
}
