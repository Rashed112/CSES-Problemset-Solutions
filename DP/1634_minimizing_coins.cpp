#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n, x;
    cin>>n>>x;
    vector<ll>dp(x+5, mod), coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    dp[0]=0;
    for(int value=1;value<=x;value++){
        for(auto c : coins){
            if(value-c>=0){
                dp[value]=min(dp[value],dp[value-c]+1 );   
            }
        }
    }
    cout<<(dp[x] == mod? -1 : dp[x])<<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
