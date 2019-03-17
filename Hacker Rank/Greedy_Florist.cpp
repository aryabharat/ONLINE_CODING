#include <bits/stdc++.h>

using namespace std;

int getMinimumCost(int n, int k, vector < int > c)
{

   sort(c.begin(),c.end());int sum=0;
    int arr[k]={0};
    int j=0;
    for(int i=n-1;i>=0;i--)
    {
        if(j==k)
           j=0;
        sum=sum+(arr[j]+1)*c[i];
        arr[j]++;j++;
    }
    return sum;
    // Complete this function
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int minimumCost = getMinimumCost(n, k, c);
    cout << minimumCost << endl;
    return 0;
}
