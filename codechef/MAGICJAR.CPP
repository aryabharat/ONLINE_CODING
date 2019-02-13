#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
#define ull unsigned long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    ull sum = 0;
	    int a[n];
	    for(int i=0;i<n;i++)
	     {
	         cin >>a[i];
	         sum  += a[i];
	     }
	     cout << sum -n+1 << endl;
	}
	return 0;
}
