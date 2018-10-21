#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main()
{

    int t;
    cin >>t;
    stack <string> stk;
    string s;
    while(t--)
    {
        int n;
        cin >> n;
        if(n == 1)
        {
            string temp;
            cin >> temp;
            stk.push(s);
            s += temp;
        }
        else if(n ==2)
        {
            int k;
            cin >> k;
            stk.push(s);
            s.erase(s.size()-k);
        }
        else if(n ==3)
        {
            int k;
            cin >> k;
            cout << s[k-1] << endl;
        }
        else
        {
            s =  stk.top();
            stk.pop();

        }
    }
}
