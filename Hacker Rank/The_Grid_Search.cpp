#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int t;
    cin>>t;

    while(t--)
    {
        // cout<<"*******************************"<<endl;
     int br,bc;
        cin>>br>>bc;
        vector<string> big(br);
        for(int i=0;i<br;i++)
          cin >> big[i];

        int sr,sc;
        cin>>sr>>sc;
        vector<string> small(sr);
        for(int i=0;i<sr;i++)
          cin>>small[i];

        bool flag =false,f =false;

        for(int i=0;i<=br-sr;i++){
            for(int j = 0;j<=bc-sc;j++){
                flag = false;
                for(int k =0;k<sr;k++){
                    for(int l = 0;l<sc;l++){
                        if(big[i+k][j+l]!= small[k][l])
                           {
                               flag = true;
                               break;
                           }
                    }
                    if(flag)
                      break;
                }
                if(!flag)
                 {f=true;break;}
            }
            if(f)
             break;
        }

        if(f)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<"\n";
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
