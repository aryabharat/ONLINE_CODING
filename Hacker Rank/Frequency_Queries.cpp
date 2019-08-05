#include<bits/stdc++.h>
using namespace std;

//m1 is to store values with their frequency
//m2 is to store the count of every frequency
map<int,int> m1,m2;

int main()
{
    int q;
    scanf("%d",&q);
    int a[q],b[q];
    
    // array of type of queries
    for(int i=0;i<q;i++)
        scanf("%d",&a[i]);
    
    // array of values
    for(int i=0;i<q;i++)
        scanf("%d",&b[i]);
    
    for(int i=0;i<q;i++)
    {
        // insert query
        if(a[i]==1)
        {
            int k=m1[b[i]];
            //decrease count of present frequency
            if(k>0)
                m2[k]--;
            //increase occurence of a number
            m1[b[i]]++;
            //increase count of present frequency + 1
            m2[k+1]++;
        }
        
        //delete query
        else if(a[i]==2)
        {
            int k=m1[b[i]];
            if(k>0)
            {
                //decrease occurence of a number
                m1[b[i]]--;
                //decrease count of present frequency
                m2[k]--;
                //increase count of present frequency - 1
                if(k-1>0) 
                    m2[k-1]++;
            }
        }
        else
        {
            //true if the count of asked frequency is non-zero
            if(m2[b[i]]>0)
                printf("1\n");
            else
                printf("0\n");
        }
    }
    return 0;
}
