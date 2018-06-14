#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a[10000],max,min,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
        max=min=a[0];
        for(i=1;i<n;i++)
        {
        if(a[i]>max)
        {
            max=a[i];
            c++;

        }
        if(a[i]<min)
        {
            min=a[i];
            c++;
        }
    }
     cout<<c;

}
