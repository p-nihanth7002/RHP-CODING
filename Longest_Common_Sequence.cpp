#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int arr[100][100]={0};
    int maximum=0;
    for(int row=1;row<=s1.length();row++){
        for(int col=1;col<=s2.length();col++){
            if(s1[row-1]==s2[col-1]){
                arr[row][col]=1+arr[row-1][col-1];
            }
            else{
                arr[row][col]=max(arr[row-1][col],arr[row][col-1]);
            }
            if(arr[row][col]>maximum){
                maximum=arr[row][col];
            }
        }
    }
    cout<<maximum<<endl;
}