#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld; //%Lf
#define fast ios_base::sync_with_stdio(0);cin.tie(0);

void solve(){
    int n, m;
    cin>>n>>m;
    multiset<int>ms;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        ms.insert(x);
    }
    for(int i=0;i<m;i++){
        cin>>x;
        auto it = ms.upper_bound(x);
        if(it == ms.begin()){
            cout<<-1<<endl;
            continue;
        }
        it = prev(it);
        cout<<*it<<endl;
        ms.erase(it);
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
