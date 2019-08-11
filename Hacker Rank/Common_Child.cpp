#include <bits/stdc++.h>

using namespace std;

// Complete the commonChild function below.
int commonChild(string s1, string s2) {
    int n = s1.size(),m=s2.size(); 
    vector<vector<int>>arr(n+1,vector<int>(m+1,0));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
                arr[i][j] = 0;
            else if(s1[i-1] == s2[j-1])
                arr[i][j] = arr[i-1][j-1]+1;
            else
                arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
        }
    }
    return arr[n][m];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
