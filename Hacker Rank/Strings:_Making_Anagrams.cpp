#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    vector<int> arr(26,0);
    for(int i=0;i<a.size();i++)
    {
        arr[a[i]-'a']++;
    }
    for(int i=0;i<b.size();i++)
    {
            arr[b[i]-'a']--;
    }
    int count  = 0;
    for(int i=0;i<26;i++)
        count += abs(arr[i]);
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
