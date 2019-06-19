#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    if (x == 0)
        return y;
    return gcd(y % x, x);
}

int findit(vector<int> &v, int n)
{
    int res = v[0];
    for (int i = 1; i < n; i++)
        res = gcd(v[i], res);

    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m1 = 0, m2 = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<int> s(v.begin(), v.end());
        v.assign(s.begin(), s.end());
        // for (int i = 0; i < v.size(); i++)
        //     cout << v[i] << " " << endl;
        n = v.size();
         m1 = v[n-1];
         m2 = v[n-2];
        //  cout << m1 << " " << m2 << "\n";
        if (n == 2)
        {
            cout << v[0] + v[1] << "\n";
            continue;
        }
        v.pop_back();
        v.pop_back();
        // cout << m1 << " " << m2;
        int gd = findit(v, n - 2);
        int aa = gcd(gd, m1);
        int bb = gcd(gd, m2);
        if (aa > bb)
        {
            cout << aa + m2 << "\n";
        }
        else
        {
            cout << bb + m1 << "\n";
        }
    }
    return 0;
}