#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<array>
using namespace std;


int main() 
{
    int flag=0;
string s;
    cin>>s;
    array <int,26> a;
    a.fill(0);
    for(int i=0;i<s.size();i++)
        a[s[i]-'a']++;
    
    for(int i=0;i<26;i++)
    {
        if(a[i]%2!=0)
            flag++;
        if(flag>1)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
