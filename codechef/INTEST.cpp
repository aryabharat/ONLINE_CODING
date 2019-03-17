#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t,k;
    cin>>t>>k;
    int temp=0;
    while(t--)
    {
      unsigned long long n;
        cin>>n;
        if(n%k==0)
        temp++;
    }
    cout<<temp;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
