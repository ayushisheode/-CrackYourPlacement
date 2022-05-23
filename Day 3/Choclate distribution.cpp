#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int v[n];

    for(int i=0;i<n;i++)
    {
        cin>>v[i];   
    }

    int m;
    cin>>m;

    //sort(v.begin(),v.end());
    sort(v,v+n);

    int ans=INT_MAX;
    int mn=INT_MAX;
    int mx=INT_MIN;
    
    for(int i=0;i<n-m+1;i++)
    {
        mn=v[i];
        mx=v[i+m-1];
        ans=min(ans,mx-mn);
    }

    cout<<ans<<endl;

}
