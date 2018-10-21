
#include <iostream>

ullmain()
{
ullh, w;
    std::cin >> h >> w;
    ulla[h][w];
    for(ulli = 0; i < h; i++)
    {
        for(ullj = 0; j < w; j++)
            std::cin >> a[i][j];
    }
    ullsum = 0;
    for(ulli = 0; i < h; i++)
    {
        if(i == 0)
        {
            for(ullj = 0; j < w; j++)
              {
                ulltemp = 0;
                if(j == 0)
                  {
                      temp = (a[i][j] - 1) * 4 + 6;
                      sum = sum + temp;
                  }

             else
                 {
                     temp = (a[i][j] - 1) * 4 + 6;
                     ulld = std::min(a[i][j-1], a[i][j]);
                     temp=temp - (d * 2);
                     sum = sum + temp;
                 }
              }
      }
        else
        {
             for(ullj=0;j<w;j++)
              {
                ulltemp=0;
                if(j==0)
                  {
                      temp = (a[i][j] - 1) * 4 + 6;
                      ulld = std::min(a[i][j], a[i-1][j]);
                      temp = temp - (d * 2);
                      sum = sum + temp;
                  }

             else
                {
                     temp = (a[i][j] - 1) * 4 + 6;
                     ulld = std::min(a[i][j-1], a[i][j]);
                     temp = temp - (d * 2);
                     d = std::min(a[i][j], a[i-1][j]);
                     temp = temp - (d * 2);
                     sum = sum + temp;
               }
            }
        }

    }
      std::cout << sum;

    return 0;
}
