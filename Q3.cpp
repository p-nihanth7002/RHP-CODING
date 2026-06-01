//to find all the possible combinations of a string
#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;i<(1<<str.length());i++){
        string res ="";
        for(int j=0;j<str.length();j++){
            if((i&(1<<j))>0){
                res+=str[j];
            }
        }
        cout<<res<<endl;
    }
}