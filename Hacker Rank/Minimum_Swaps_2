#include<bits/stdc++.h> 
using namespace std; 
  
// Driver code 
int main() 
{ 
    int n;
    cin >> n;
    vector<int> arr (n);
    for(int i=0;i<n;i++)
         cin >> arr[i];
      int c = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == i+1)
            continue;
        
        swap(arr[i],arr[arr[i]-1]);
        i--;
        c++;
    } 
      cout << c <<"\n";
    return 0; 
}

