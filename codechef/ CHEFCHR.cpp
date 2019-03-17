#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        string s,temp;
        cin>>s;
        int c,h,e,f;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            c=h=e=f=0;
            temp=s.substr(i,4);
            for(int j=0;j<4;j++)
            {
                if(temp[j]=='c')
                    c++;
                else if(temp[j]=='h')
                    h++;
                else if(temp[j]=='e')
                    e++;
                else if(temp[j]=='f')
                    f++;

            }
            if(c==1&&e==1&&f==1&&h==1)
                cnt++;

        }
        if(cnt!=0)
            cout<<"lovely "<<cnt;
        else
          cout<<"normal";
        cout<<endl;
    }

}
