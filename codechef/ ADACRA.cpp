#include<iostream>
using namespace std;
int main()
{
	int t,c,b,i;
	char a[50];
	cin>>t;
	while(t--)
	{   i=0;
		c=b=0;
		cin>>a;
		while(a[i]!='\0')
		{
			if((a[i]=='U'&&i==0)||(a[i]=='U'&&a[i-1]=='D'))
			c++;
			if((a[i]=='D'&&i==0)||(a[i]=='D'&&a[i-1]=='U'))
			b++;
			i++;
        }
			if(c>b)
			c=b;
			cout<<c<<endl;
	}
	return 0;
}
