#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> vec1 (n);
    for(int i=0;i<n;i++)
        cin >> vec1[i];
    std::rotate(vec1.begin(), vec1.begin()+k, vec1.end());
    for(int i=0;i<n;i++)
        cout << vec1[i] << " ";
}
