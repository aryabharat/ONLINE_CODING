#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
   int ans = 0;
    for(int i = q.size()-1;i>=0;i--)
    {
        if(q[i]!=(i+1))
        {
          if (q[i - 1] == (i + 1)) // 5 == 5
          {
            ans++;
            int temp = q[i];
            q[i] = q[i - 1];
            q[i - 1] = temp;

          } 
          else if (q[i - 2] == (i + 1)) { //  5
            ans += 2;
            int temp = q[i - 2];
            q[i - 2] = q[i - 1];
            q[i - 1] = q[i];
            q[i] = temp;
          } 
          else {
            cout << "Too chaotic\n";
            return;
          }
        }
    }
    cout <<  ans << "\n";
    return;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        vector <int> q (n);
        for(int i=0;i<n;i++)
        {
            cin >> q[i];
        }
        minimumBribes(q);
    }
}
