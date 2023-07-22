/*  1. dp-state define: dp(i, x) : valid ways to make x using c1, c2, ....ci
    2. final ans: dp(N, X)
    3. recursive relation: dp(i, x) = dp(i-1, x) + dp(i, x-ci)
    4. edge case: dp(i, 0) = 1 
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
    vector<int>v(n+5);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<vector<int>>dp(n+5, vector<int>(x+5));
    for(int i=1;i<=n;i++){
        for(int sum =0; sum<=x; sum++){
            if(sum==0){
                dp[i][sum] = 1;
            }
            else{
                //not taking the coin
                int op1 = (i==1) ? 0 : dp[i-1][sum];
                //taking the coin
                int op2 = (v[i]>sum) ? 0 : dp[i][sum-v[i]];
                dp[i][sum] = (op1 + op2) % mod;
            }
        }
    }
    cout<<dp[n][x]<<endl;
}

int main() {
    fast;
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}

//Time: O(N*X)
