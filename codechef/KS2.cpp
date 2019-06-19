#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

class gfg 
{ 
    public: 
    int getSum(ull n) 
    {  
    int sum = 0; 
    while (n != 0) 
    { 
     sum = sum + n % 10; 
     n = n/10; 
    }  
 return sum; 
 } 
};

int main()
{
    gfg g; 
    int t;
    cin >> t;
    while(t--)
    {
        
        ull n;
        cin >> n;
        long long x = g.getSum(n);
        int xx;
        for(int i=0;i<=9;i++)
            if((x+i)%10 == 0)
            {
                xx = i;
                break;
            }
        std::cout << ( n*10 + xx) << "\n";
    }
    return 0;
}