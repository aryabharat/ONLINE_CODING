#include <bits/stdc++.h>

using namespace std;

#define lli long long int

int slove(lli N, lli M, int x)
{
    if (N% M == 0)
        return x;

    if (x == 1)
    {
        if (N/M > 1)
            return(slove(M, N%M, x) | slove(M, N%M, !x));
        return(slove(M, N%M, !x));
    }

    if (N/M > 1)
        return(slove(M, N% M, x) & slove(M, N% M, !x));

    return(slove(M, N% M, !x));
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        lli N, M;
        cin >> N >> M;

        if (slove(max(N, M), min(N, M), 1))
            cout << "Ari" << endl;
        else
            cout << "Rich" << endl;
    }
    return 0;
}