#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    vector<long long> arr1(a),arr2(b);
    for(int i=0;i<a;i++){cin>>arr1[i];}
    for(int i=0;i<b;i++){cin>>arr2[i];}
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end()); 
    int count=0;
    int i=a-1;
    int j=b-1;
    while(i>=0 && j>=0){
        if(arr2[j]<=2*arr1[i]){
            count++;
            i--;
            j--;
        }
        else{
            j--;
        }
    }
    cout<<count<<endl;
}