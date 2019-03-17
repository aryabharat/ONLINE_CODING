#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
int n;
cin>>n;
int a[n];
a[0]=1;
for(int j=1;j<n;j++)
{
a[j]=(a[j-1]+2);
}
for(int j=0;j<n;j++)
{
cout<<a[j]<<" ";
}
cout<<endl;
}

}
