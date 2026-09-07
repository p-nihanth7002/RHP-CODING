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

using namespace std;

void solve() {
int t;cin>>t;
while(t--){
    int n,m;cin>>n>>m;
    vector<int>cnt(m+1,0);
    for(int ctr=1;ctr<=n;ctr++){
            int curr;cin>>curr;
        cnt[curr]++;
    }
 vector<int>psum(m+1);
 psum[0]=0;
 for(int ctr=1;ctr<=m;ctr++){
    psum[ctr]=cnt[ctr]+psum[ctr-1];
 }
 int ans=0;
 for(int x=1;x<=m;x++){
    int carrotval=psum[m]-psum[x-1];
    if(2*x<=m){
        carrotval+=cnt[2*x];
    }
    ans=max(ans,carrotval);
 }
 cout<<ans<<endl;
}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}