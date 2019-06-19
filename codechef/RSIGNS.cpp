#include <bits/stdc++.h>
#define mod 1000000007
#define ull unsigned long long
using namespace std;

ull power(int x , ull y) 
{ 
    ull temp; 
    if( y == 0) 
        return 1; 
    temp = (power(x, y/2))%mod; 
    if (y%2 == 0) 
        return (temp*temp)%mod; 
    else
        return (x*temp*temp)%mod; 
} 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        ull x = 2;
       
         x = power(2,k);
        cout <<((x * 5)) % mod << endl;
    }
    
}
