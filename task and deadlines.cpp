#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    sort(b+0,b+n);
    sort(a+0,a+n);
    ll ans=0,reward=0;
    for(ll i=0;i<n;i++){
        ans+=a[i];
        reward+=b[i]-ans;
    }
    
    cout<<reward<<"\n";
    return 0;
}
