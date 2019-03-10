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
	    int num;
	    cin >> num;
	    ull p=0,n=0,z=0;
	    ull pn =0,nn=0;
	    int a[num];
	    for(int i=0;i<num;i++)
	     {
	         cin >>a[i];
	         if(a[i] > 0)
                pn++;
            
	         if(a[i] < 0)
	             nn++;
	             
	         if(a[i] == 0)
	         z++;
	     }
	   //  cout << p << " " << n;
	     if(pn >= nn )
	        {
	            cout << pn + z;
	            cout << " ";
	            if(pn +z == num)
	            cout << pn+z;
	            else
	            cout << nn;
	        }
	     else
	        {
	            cout << nn +z;
	            cout << " ";
	            if(nn +z == num)
	            cout << nn+z;
	            else
	            cout << pn;
	        }
	        cout <<"\n";
	}
	return 0;
}
