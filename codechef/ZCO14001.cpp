#include<iostream>
using namespace std;
int main()
{
    int n,h;cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i;
    int c=0;
    cin>>i;
    int b=0;
    while(i!=0)
    {
        if(i==2&&c<n-1)
            c++;
        else if(i==1&&c>0)
            c--;
            else if(i==3&&b==0&&a[c]>0)
                   {a[c]--; b++;}
            else if(i==4&&b==1&&a[c]<h)
                {a[c]++;b--;}
                cin>>i;

    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
