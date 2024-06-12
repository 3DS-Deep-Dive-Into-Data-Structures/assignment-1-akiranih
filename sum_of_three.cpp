#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,A,B,C,l=0;
    cin>>n>>x;
    vector<int> v(n),g(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    g=v;
    sort(v.begin(),v.end());
    for(int k=0;k<n;k++)   
    {
        int i=0,j=n-1;
        while(j>i)
        {
            if(v[i]+v[j]+v[k]==x) 
            {
                A=v[i];
                B=v[j];
                C=v[k];
                l=1;
                if(k==j||k==i) l=0;
                break;
            }
            if(v[i]+v[j]+v[k]>x)
            {
                j--;
            } 
            if(v[i]+v[j]+v[k]<x)
            {
                i++;    
            }
        }
        if(l==1) break;
    }
    if(l==0) cout<<"IMPOSSIBLE";
    else 
    {
        for(int i=0;i<n;i++)
        {
            if(C==g[i]) 
            {
                cout<<i+1<<" ";
                g[i]=0;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(B==g[i])
            {
                cout<<i+1<<" " ;
                g[i]=0;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(A==g[i])
            {
                cout<<i+1;
                g[i]=0;
                break;
            }
        }
    }
}
