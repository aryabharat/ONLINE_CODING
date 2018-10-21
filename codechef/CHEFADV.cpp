#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    bool a = false;
    if(((n-1)%x == 0) && ((m-1)%y==0))
      a = true;
    else if((n>=2) && (m>=2) && ((n-2) %x ==0) && ((m-2)%y==0))
        a = true;
     if(a)
     cout << "Chefirnemo";
   else
     cout << "Pofik";
     cout <<endl;
  }
  return 0;
}
