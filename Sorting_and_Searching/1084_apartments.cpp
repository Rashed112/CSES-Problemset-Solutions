#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int n, m, k;
    cin>>n>>m>>k;
    int a1[n], a2[m];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
    sort(a1, a1+n);
    sort(a2, a2+m);
    int cnt=0;
    int i=0, j=0;

    while(i<n && j<m){
        if(abs(a1[i]-a2[j]) <= k){
            i++;
            j++;
            cnt++;
        }
        else if(a1[i]-k > a2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

// Time: O(nlog(n)+mlog(m))
