#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
    string s;
    cin>>s;
    unordered_map<int, int> hashmap;
    int sum=0;
    int res=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            sum+=-1;
        }
        else{
            sum+=1;
        }
        if(sum==0){
            res=i+1;
        }
        if(hashmap.find(sum)!=hashmap.end()){
            res = max(res,i-hashmap[sum]);
        }
        else{
            hashmap[sum]=i;
        }

    }
    cout<<res<<endl;
}