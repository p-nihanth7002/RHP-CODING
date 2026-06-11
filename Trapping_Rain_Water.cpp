#include <iostream>
using namespace std;
int main() {
    int size;
    cin>>size;
    int height[size];
    for(int i=0;i<size;i++){
        cin>>height[i];
    }
    int arr1[size],arr2[size];
    arr1[0]=height[0];
    arr2[size-1]=height[size-1];
    int res=0;
    for(int i=1;i<size;i++){
        arr1[i]=max(height[i],arr1[i-1]);
    }
    for(int i=size-2;i>=0;i--){
        arr2[i]=max(height[i],arr2[i+1]);
    }
    for(int i=0;i<size;i++){
        res+=min(arr1[i],arr2[i])-height[i];
    }
    cout<<res<<endl;
}