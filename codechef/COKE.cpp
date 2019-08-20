#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ull unsigned long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, l, r;
        cin >> n >> m >> k >> l >> r;
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            int c, pr;
            cin >> c >> pr;
            p.push_back({c, pr});
        }
        int mi = INT_MAX;
        bool flag = false;
        for (int i = 0; i < p.size(); i++)
        {
            int price = p[i].second;
            int t = p[i].first;

            if (abs(t - k) > m)
            {
                if (t > k)
                    t -= m;
                else
                    t += m;
            }
            else
            {
                t = k;
            }

            if (t >= l and t <= r)
            {
                flag = true;
                mi = min(mi, price);
                cout << mi << " ";
            }
        }
        if (!flag)
            cout << "-1";
        else
        {
            cout << mi;
        }
        cout << endl;
    }
}
