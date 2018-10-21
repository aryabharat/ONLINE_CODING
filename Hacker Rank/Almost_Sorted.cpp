#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

ullmain()
{
    ulln;
    std::cin >> n;
    std::vector <int> a(n);
    std::vector <int> b(n);
    for(ulli; i < n; i++)
        {
          std::cin >> a[i];
          b[i] = a[i];
        }
    sort(b.begin(), b.end());
    ullp = 0;
    ulls,l;
    s = l = 0;
    ullt = 0;
    for(ulli = 0; i < n; i++)
    {
        if(b[i] != a[i])
            {
              p++;
              if(t == 0)
                {
                  s = i;
                  t++;
                }
              else
                 l=i;
            }
    }

    if(p == 0)
        {
          std::cout << "yes";
          return 0;
        }
     else if(p == 2)
        {
          std::cout << "yes" << "\n";
          std::cout << "swap " << s + 1 << " " << l + 1;
          return 0;
    }


    {
        for(ulli = l; i > s; i--)
        {
            if(a[i] > a[i-1])
            {
                std::cout << "no";
                return 0;
            }
        }

        std::cout << "yes" << "\n";
        std::cout << "reverse " << s + 1 << " " << l + 1;
    }





    /* Enter your code here. Read input from STDIN. Prulloutput to STDOUT */
    return 0;
}
