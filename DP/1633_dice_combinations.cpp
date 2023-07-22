/*
1. define: dp(i) : no of valid ways of throwing dice so that sum = i
2. final ans : dp(n)
3. recurrence: dp(i) = dp(i-1) + dp(i-2)+...+ dp(i-6) 
4. edge case: dp(0) = 1
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf

#define fast            ios_base::sync_with_stdio(0);cin.tie(0);
#define pb              push_back
#define all(a)          a.begin(),a.end()

const int mod=1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<ll>dp(n+5, 0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int x=1;x<=6;x++){
            if(x>i){
                break;
            }
            dp[i]=(dp[i]+dp[i-x])%mod;
        }
    }
    cout<<dp[n]<<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
