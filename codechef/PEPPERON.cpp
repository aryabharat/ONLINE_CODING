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
        int n;
        cin >> n;
        int p1[n] = {0};
        int p2[n] = {0};
        int m = n / 2;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            string temp = s.substr(0, m);
            s = s.substr(m, n - m + 1);
            //    cout << temp << " " << s << endl;
            for (int j = 0; j < m; j++)
            {
                p1[i] += temp[j] - '0';
            }
            for (int j = 0; j < n - m; j++)
                p2[i] += s[j] - '0';
        }
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            // cout << p1[i] << " " << p2[i]<<endl;
            sum1 += p1[i];
            sum2 += p2[i];
        }
        int mi = abs(sum1 - sum2);
        if (mi == 0)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            sum1 -= p1[i];
            sum1 += p2[i];
            sum2 -= p2[i];
            sum2 += p1[i];
            mi = min(mi,abs(sum1-sum2));
            sum1 += p1[i];
            sum1 -= p2[i];
            sum2 += p2[i];
            sum2 -= p1[i];
        }
        cout << mi << endl;
    }
}
    