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
    int n,m;cin>>n>>m;
    vector<int>cnt(m+1,0);
    for(int ctr=1;ctr<=n;ctr++){
            int curr;cin>>curr;
        cnt[curr]++;
    }
 vector<int>psum(m+1,0);
for(int cl=1;cl<=m;cl++){
    psum[cl]=psum[cl-1]+cnt[cl];
}
vector<LL>ans(m+1,0);
for(int cut=1;cut<=min(m,18);cut++){
    LL maxc=0;
    for(int x=1;x<=m;x++){
        LL currc=0;
        for(int mul=1;mul*x<=m;mul++){
                int lt=mul*x,rt=lt+x-1;
            currc+=min(1LL*mul,(1LL<<cut)-1)*(psum[min(rt,m)]-psum[lt-1]);
        }
        if((1LL<<cut)*x<=m){
            currc+=cnt[(1LL<<cut)*x];
        }
        maxc=max(maxc,currc);
    }
    ans[cut]=maxc;
}
for(int cut=1;cut<=m;cut++){
    cout<<ans[min(cut,18)]<<(cut==m?"\n":" ");
}
}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}