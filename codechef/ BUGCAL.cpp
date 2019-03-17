#include <cmath>
#include <math.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int gsum=0;
        int l=max(log10(a)+1,log10(b)+1);
        for(int i=0;i<l;i++)
        {
            int temp=a%10;
            int temp1=b%10;
            int sum=temp+temp1;
            if(sum>=10)
                sum=sum%10;
            gsum=gsum+sum*pow(10,i);
            a=a/10;
            b=b/10;
        }
       // gsum=gsum+((a+b)*pow(10,l-1));
        cout<<gsum<<endl;
    }
    /* Entetr your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
