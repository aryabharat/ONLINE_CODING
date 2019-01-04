#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2)
{
int a1[26];int a2[26];
    for(int i=0;i<26;i++)
        a1[i]=a2[i]=0;
    
    for(int i=0;i<s1.size();i++)
        a1[s1[i]-97]++;
        
       for(int i=0;i<s2.size();i++)
            a2[s2[i]-97]++;
     
          for(int i=0;i<26;i++)
             {
                  if(a1[i]!=0&&a2[i]!=0)
                    return("YES");
             }  
    return("NO");
    
    
    
    
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        string result = twoStrings(s1, s2);
        cout << result << endl;
    }
    return 0;
}
