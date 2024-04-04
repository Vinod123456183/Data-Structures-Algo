        //working for different
#include<iostream>
using namespace std;
void permut(string ans , string s , int i) {
    if(s.size()==i){
        cout<<ans<<endl;
        return;
    }
    // char ch = s[i];
    permut(ans+s[0],s,i+1);
    permut(ans+s[1],s,i+1);
}
int main(){
    string s = "abcd";
    permut("",s,0);
}
