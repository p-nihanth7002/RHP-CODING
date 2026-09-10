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
LL emp,pro,m;
cin>>emp>>pro>>m;
LL ans=0;
for(LL month=0;month<min(pro,m);month++){
    ans+=(pro+month)%(emp+month);
}
if(m>pro){
    LL rmonth = m-pro;
    ans+=rmonth*(pro-emp);
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