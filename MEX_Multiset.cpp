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
    vector<int> arr(n);
    vector<int>zeroidx;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0) zeroidx.push_back(i);
    }
    if(zeroidx.size()==1){
        cout<<"NO"<<endl;
        continue;
    }
    string s(n,'C');
    if(zeroidx.size()>0){
        int firstzero=zeroidx[0];
        s[firstzero]='B';
        for(int i=1;i<zeroidx.size();i++){
            s[zeroidx[i]]='A';
        }
    }
    cout<<"YES"<<endl<<s<<endl;
}
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}