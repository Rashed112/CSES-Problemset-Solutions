/*
1. dp(i): min steps needed to go from i to 0
2. final ans: dp(n)
3. recurrence: dp(n) = 1 + dp(n-di) minimum over all valid di
4. dp[0] = 0;
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
    int cnt=0;
    vector<int>dp(n+5);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        int temp = i, minSteps = mod;
        while(temp != 0){
            int di = temp%10;
            temp/=10;
            if(di == 0 ){
                continue;
            }
            minSteps = min(minSteps, 1+dp[i-di]);

        }
        dp[i] = minSteps;
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
