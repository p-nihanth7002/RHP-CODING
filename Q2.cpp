// To find a string contains all lowercase(a-z),uppercase(A-Z),numbers(0-9)
#include <iostream>
using namespace std;
int main() {
    string str;
    cin>>str;
    int flag1=0,flag2=0,flag3=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            flag1|=(1<<str[i]-'a');
        }
            else if(str[i]>='A' && str[i]<='Z'){
                flag2|=(1<<str[i]-'A');
            }
                else if(str[i]>='0' && str[i]<='9'){
                    flag3|=(1<<str[i]-'0');
                }
    }
    if(flag1 && flag2 ==((1<<26)-1) && flag3==((1<<10)-1)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}