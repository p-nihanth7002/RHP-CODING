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
string str;cin>>str;
int ans=0;
if(str[0]=='0' || str.find("00")!=string::npos){
    cout<<"-1"<<endl;
    continue;
}
if(str.find("+-")!=string::npos || str.find("-+")!=string::npos){
    if(str.find("+--+")!=string::npos || str.find("-++-")!=string::npos) ans=3;
    else ans=2;
}
else{
    ans=1;
    for(int i=0;i<n;i+=2){
        if(str[i]=='0'){
            ans=2;
        }
    }
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