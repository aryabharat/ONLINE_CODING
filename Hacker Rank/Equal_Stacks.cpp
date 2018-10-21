#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    vector <int> a (n1);
    vector <int> b (n2);
    vector <int> c (n3);
    int s1=0,s2=0,s3=0;
    for(int i=0;i<n1;i++)
    {
        cin >> a[i];
        s1+=a[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin >> b[i];
        s2+=b[i];
    }
    for(int i=0;i<n3;i++)
    {
        cin >> c[i];
        s3+=c[i];
    }
    bool ans = false;
    if(s1 == s2 && s2 == s3)
    {
        cout << s2 << "\n";
        ans = true;
    }
    int i=0,j=0,k=0;
    while(!ans)
    {
        if((s1 == s2 && s2 == s3) || (s1 == 0 && s2 == 0 && s3 ==0))
        {
            ans = true;
             cout << s1 <<"\n";
            continue;
        }
        if(s1 > s2)
        {
            s1-=a[i];
            i++;
        }
        else if(s2>s3)
        {
            s2-=b[j];
            j++;
        }
        else
        {
            s3-=c[k];
            k++;
        }

    }

}
