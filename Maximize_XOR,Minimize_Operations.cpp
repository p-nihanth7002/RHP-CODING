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
int x,y;cin>>x>>y;
int sum=x+y,rx=0,ry=0;
for(int sh=30;sh>=0;sh--){
    if((sum&(1<<sh))!=0){
        if((rx|(1<<sh))<=x){
            rx=rx|(1<<sh);
        }
        else{
            ry=ry|(1<<sh);
        }
    }
}
cout<<sum<<" "<<x-rx<<endl;
}
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}