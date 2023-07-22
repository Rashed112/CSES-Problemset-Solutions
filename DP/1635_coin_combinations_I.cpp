/*
1. dp state: dp(i): no. of ways to form sum == i with given coins
2. final ans: dp(x)
3. recurrence: dp(i) = dp(i-c1)+dp(i-c2)+...+dp(i-cn)
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
    int n, x;
    cin>>n>>x;
    vector<ll>dp(x+5), coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    dp[0]=1;
    for(int value=1;value<=x;value++){
        dp[value]=0;
        for(auto c : coins){
            if(c<=value){
                dp[value]=(dp[value]+dp[value-c])%mod;   
            }
        }
    }
    cout<<dp[x]<<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
//Time: O(n*x)
