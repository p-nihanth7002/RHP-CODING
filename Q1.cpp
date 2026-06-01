// To find a string contains all lowercase alphabets(a-z)
#include <iostream>
using namespace std;
int main() {
    string str;
    cin>>str;
    int flag=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
     flag = flag|(1<<(str[i]-'a'));
    }
}
if(flag==((1<<26)-1)){
    cout<<"Yes,all lowercase alphabets are present";
}
else{
    cout<<"no,all lowercase alphabets are not present";
}
}
