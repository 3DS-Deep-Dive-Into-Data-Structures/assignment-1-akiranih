#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,q;
    cin>>n;
    cin>>q;
    vector<int> a(n);
    vector<int> b(n + 1);
    for (int i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    for (int j=0;j<n;j++)
    {
        b[j+1]=b[j]^a[j];
    }
    for (int k=0;k<q;k++) 
    {
        int x,y,z;
        cin>>x;
        cin>>y;
        z=b[y]^b[x - 1] ;
        cout<<z<<endl;
    }
    return 0;
}