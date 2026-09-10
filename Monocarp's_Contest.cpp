#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
using LL = long long;
using namespace std;
 
void solve() {
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>arr(n);
int oc=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    oc+=arr[i];
}
int zc=n-oc;
if(zc<2){
    cout<<"-1"<<endl;
    continue;
}
int ans=0;
if(arr[0]==1) ans++;
if(arr[n-1]==1) ans++;
cout<<ans<<endl;
}
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}