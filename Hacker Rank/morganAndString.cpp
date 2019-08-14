#include <bits/stdc++.h>

using namespace std;

// Complete the morganAndString function below.
bool compare(string s1, int i,string s2, int j)
{
    while(i<s1.size() && j<s2.size())
    {
        if(s1[i] < s2[j])
            return true;
        else if(s1[i]> s2[j])
            return false;
        i++;
        j++;
    }
    if(i == s1.size())
        return false;
    else
        return true;

}
string morganAndString(string s1, string s2) {
    int a=0,b=0;
    string s = "";
    while(a<s1.size() && b<s2.size())
    {
        if(s1[a] > s2[b])
        {
            s+=s2[b];
            b++;
        }
        else if(s1[a] < s2[b])
        {
            s+=s1[a];
            a++;
        }
        else
        {
            if(compare(s1,a+1,s2,b+1))
            {
                s+=s1[a];
                a++;
                while(a<s1.size() && s1[a] == s1[a-1])
                {
                    s+=s1[a];
                    a++;
                }
            }
            else{
            //    cout << s << "\n";
                s +=s2[b];
                b++;
                while(b<s2.size() && s2[b] == s2[b-1])
                {
                    s+=s2[b];
                    b++;
                }                
            }
        }
    }
    // cout <<  endl;
    // // cout << b << " " << s2.size()-b;
    // cout << "\n" << a << " " << s1.size();
    if(a==s1.size())
    {
        s += s2.substr(b,s2.size()-b);
    }
    else
    {
        s += s1.substr(a,s1.size()-a);
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string a;
        getline(cin, a);

        string b;
        getline(cin, b);

        string result = morganAndString(a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
