#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,c=0;
    cin>>n>>k;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
      if(v[i]-v[i+1]==k||v[i+1]-v[i]==k)
          c++;
    else if(v[i]-v[i+1]<k||v[i+1]-v[i]<k)
               {
                           int temp=1;
                      while(abs(v[i]-v[i+temp])<=k)
                      {
                          if(v[i]-v[i+temp]==k||v[i+temp]-v[i]==k)
                                    {
                                        c++;break;
                                     }
                          temp++;
                      }
               }
    }
    cout<<c;



    return 0;
}
