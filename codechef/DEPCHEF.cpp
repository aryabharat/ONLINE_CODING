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
	    cin >>n;
	    int a[n];
	    int  d[n];
	    for (int i=0;i<n;i++)
	        cin >>a[i];
	   for (int i=0;i<n;i++)
	        cin >>d[i];
	        
	        int m = -1;
	        for (int i=0;i<n;i++)
	            {
	                int temp =0;
	                if(i==0)
	                {
	                    temp = a[i+1] + a[n-1];
	                    if(temp < d[i])
	                      m = max(d[i],m);
	                }
	                else if(i==(n-1))
	                {
	                    temp = a[i-1] + a[0];
	                    if(temp < d[i])
	                       m = max(d[i],m);
	                }
	                else
	                {
	                    temp = a[i+1] + a[i-1];
	                    if(temp < d[i])
	                      m = max(d[i],m);
	                }
	            }
	            if(m==-1)
	        cout << -1;
	        else
	        cout << m;
	        cout <<endl;
	    
	}
	return 0;
}
