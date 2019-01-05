#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
    map<string,int> mp;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        for(int j = 1;j<= n-i;j++)
        {
            string ss = s.substr(i,j); 
            sort(ss.begin(),ss.end());
            mp[ss]++;
            cout << ss << endl;
        }
    }
    long long ans =0;
    map<string,int> :: iterator it;
    for(it = mp.begin();it != mp.end(); it++)
    {
        long long temp = it->second;
        if(temp!=0)
        {   
          ans += (temp* (temp-1))/2;
        }
    }

return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
