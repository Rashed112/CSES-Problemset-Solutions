#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf
#define fast ios_base::sync_with_stdio(0);cin.tie(0);

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    ll res=INT_MIN, sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(sum<0){
            sum=0;
        }
        sum+=v[i];
        res = max(sum, res);
    } 
    cout<<res<<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
