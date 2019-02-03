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
	    string s;
	    int a[26] = {0};
	    for(int j = 0;j<n;j++)
	    {
	        int b[26] = {0}; 
	        cin >> s;
	        for(int i=0;i<s.length();i++)
	        {
	            b[s[i] - 'a']++;
	            if (b[s[i] - 'a'] == 1)
	               a[s[i] - 'a']++;
	        }
	    }
	    int cnt = 0;
	    for(int i=0;i<26;i++)
	    {
	        if(a[i] == n)
	        cnt++;
	     // cout << a[i] <<"," <<n <<endl;
 	    }
	   // cout << endl;
	    cout << cnt << endl;
	    
	}
	return 0;
}
