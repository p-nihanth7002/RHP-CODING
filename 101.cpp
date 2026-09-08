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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lt=0,rt=n-1;
    while(lt<n && arr[lt]==0)lt++;
    while(rt>=0 && arr[rt]==0)rt--;
    if(lt<=rt){
        for(int i = lt+1;i<rt;i++){
            if(arr[i]==-1) arr[i]=0;
        }
        arr[lt]=arr[rt]=1;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
 
    cout<<endl;
}
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}