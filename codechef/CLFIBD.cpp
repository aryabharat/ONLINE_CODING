#include <bits/stdc++.h>
using namespace std;
int check(int a,int b, int c)
  {
    if(a==b+c||b==a+c||c==b+a)
        return 0;
    else
        return 1;
  }

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      string s;
      cin >> s;
      int arr[26] = {0};
      for(int i = 0; i < s.size(); i++)
          arr[s[i]-'a']++;

      vector<int> v;
      for(int i = 0; i < 26;i++)
          if(arr[i] != 0)
              v.push_back(arr[i]);
        //sort(v.begin(), v.end(), greater<int>());
        int flag = 0;
if(v.size() > 2)
      for(int i = 2; i < v.size(); i++)
        {

            flag =  check(v[i],v[i-1],v[i-2]);

          if(flag == 1)
            break;
        }


        if(flag == 0)
          cout << "Dynamic\n";
        else
          cout << "Not\n";

    }
}
