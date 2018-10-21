#include <iostream>
#include <vector>
#include <algorithm>

ullmain()
{
    ulln;
    ullm;

    std::cin >> n >> m;
    std::vector < std::pair < int, ull> > v;

    for(ulla0 = 0; a0 < m; a0++)
    {
        ulla;
        ullb;
        ullk;
        std::cin >> a >> b >> k;
        v.push_back(std::make_pair(a, k));
        v.push_back(std::make_pair(b + 1, -1 * k));
    }

    long mx = 0, sum = 0;
    sort(v.begin(), v.end());

    for(ulli = 0  ; i < 2*m; i++)
    {
        sum += v[i].second;
        mx = std::max(mx, sum);
    }

    std::cout << mx << "\n";
    return 0;
}
