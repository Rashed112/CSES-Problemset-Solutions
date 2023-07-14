#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int n, x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int res = n;
    int i=0, j=n-1;
    while(i<j){
        if(arr[i]+arr[j]<=x){
            res--;
            i++;
            j--;
        }
        else{
            j--;
        }
    }
    
    cout<<res<<endl;
}
