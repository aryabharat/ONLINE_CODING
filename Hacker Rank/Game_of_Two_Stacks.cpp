#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
         int n,m,x;
        cin>>n>>m>>x;
    vector <int> a(n);
    vector <int> b(m);

    for(int i=0;i<n;i++)
       cin>>a[i];
   for(int i=0;i<m;i++)
       cin>>b[i];

    int ai=0,bi=0,sum=0,c=0;
    while((sum+a[ai]) <= x && ai < n)
    {
        sum +=a[ai];
        ai++;
        c++;
    }

    while(bi < m && ai >=0)
    {
        sum +=b[bi];
        bi++;
        while(sum > x && ai>0)
        {
            ai--;
            sum -=a[ai];
        }
        if(sum<=x && (ai+bi)>c)
            c=ai+bi;
    }
    cout << c << endl;
    }

}
