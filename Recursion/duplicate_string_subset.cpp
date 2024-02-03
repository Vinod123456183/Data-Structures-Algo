#include<iostream>
#include<vector>
using namespace std;

void subset(string ans , string orignal){
    if(orignal == ""){
        cout<<ans<<endl;
        return;
    }
    char c = orignal[0];
    subset(ans,orignal.substr(1));
    subset(ans+c,orignal.substr(1));
}

int main(){
    string s="abc";
    subset("",s);
}