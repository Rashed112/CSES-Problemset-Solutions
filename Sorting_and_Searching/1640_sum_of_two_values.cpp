#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf
#define fast ios_base::sync_with_stdio(0);cin.tie(0);

void solve(){
    int n, target,x;
    cin>>n>>target;
    vector<pair<int, int>>vpp(n);
    for(int i=0;i<n;i++){
        cin>>x;
        vpp[i]=make_pair(x, i+1);
    }
    sort(vpp.begin(), vpp.end());
    int i=0, j=n-1, f=0;
    while(i<j){
        if(vpp[i].first+vpp[j].first==target){
            cout<<vpp[i].second<<" "<<vpp[j].second<<endl;
            f=1;
            break;
        }
        if(vpp[i].first+vpp[j].first < target){
            i++;
        }
        else{
            j--;
        }
    }
    if(f==0){
        cout<<"IMPOSSIBLE"<<endl;
    }
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
