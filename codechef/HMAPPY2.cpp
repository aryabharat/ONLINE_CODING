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
		ull n,a,b,k,cnt=0;
		cin >> n>>a>>b>>k;
		ull t1 = n/((a*b)/__gcd(a,b));
		ull t = (n/a) +(n/b) - (2*t1);
		if(t>=k)
		cout << "Win";
		else
		cout << "Lose";
		cout<<endl;
	}
	return 0;
}
