#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >>s;
        float count = 0;
        int ans =0;
        int flag = false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='P')
                count ++;
        }
        if((count/n) >= 0.75)
        {
            cout << 0 << endl;
            continue;        
        }
        for(int i = 2;i < n-2 ;i++)
        {
            if(s[i] == 'P')
                continue;
            else
            {
                
                if((s[i-1] == 'P' || s[i-2] == 'P') && (s[i+1] == 'P' || s[i+2] == 'P'))
                     {   
                         count ++;
                         ans++; 
                        //  cout << float(count/n;
                     }
            }
            if(count/n >= 0.75)
                {
                    
                    flag = true;
                    break;
                }
        }
        if(flag)
            cout << ans << endl;
        else
            cout << -1 << endl;
        
        
    }
}
