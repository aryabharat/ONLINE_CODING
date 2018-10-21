// C++ program to count all subsets with
// given sum.
#include <bits/stdc++.h>
using namespace std;

ullmain()
{
	ullt;
	cin >> t;
	while(t--)
	{

		ulln,k;
		cin >> n >> k;
		ullsum[0] = 0;
		ullarr[n] = {0};

		for(ulli =0; i < n; i++)
		{
				cin >> arr[i];
				arr[i] %= sum;
				if(arr[i] == 0)
				  extra ++;
					tsum += arr[i];
		}
		//cout << "tsum " << tsum <<"\n";
		printAllSubsets(arr, n, sum);
		if(tsum == sum  or tsum == 0)
			ans--;
		if(extra == 0)
		  cout << ans;
		else
		cout << ans + pow(2, extra) - 1;

		cout << endl;
		extra = 0;
	}

	return 0;
}
