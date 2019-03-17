#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;
    while(n--)
    {
        int ca=0,cb=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                int temp=0,end=0;
                ca++;
                for(int j=i+1;j<s.size();j++)
                {
                    if(s[j]=='.')
                    {
                        temp++;
                    }
                    else if(s[j]=='A')
                    {
                        end++;break;
                    }
                    else
                    {
                        break;
                    }
                }
             if(end==1)
             ca=ca+temp;
            }
            else if(s[i]=='B')
            {
                  int temp=0,end=0;
                cb++;
                for(int j=i+1;j<s.size();j++)
                {
                    if(s[j]=='.')
                    {
                        temp++;
                    }
                    else if(s[j]=='B')
                    {
                        end++;break;
                    }
                    else
                    {
                        break;
                    }
                }
             if(end==1)
             cb=cb+temp;
            }
        }
        cout<<ca<<" "<<cb<<endl;
    }

}
