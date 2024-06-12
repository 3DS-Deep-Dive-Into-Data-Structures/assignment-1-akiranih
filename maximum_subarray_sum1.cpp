#include<bits/stdc++.h>
using namespace std;
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b;
    cin>>n>>a>>b;
    long long int prefix_sum[n+1];
    prefix_sum[0]=0;
    int c;
    for(int i=1;i<n+1;i++)
    {
        cin>>c;
        prefix_sum[i]=c+prefix_sum[i-1];
    }
    multiset<long long int> set1;
    long long int Max = INT64_MIN;
    for(int i=a;i<=n;i++)
    {
        if(i>b)
        {
            set1.erase(set1.find(prefix_sum[i-b-1]));
        }
        set1.insert(prefix_sum[i-a]);
        Max=max(Max,prefix_sum[i]-*set1.begin());
    }
    cout<<Max;
}