
// #include<iostream>
// using namespace std;
// void subset(string ans , string orignal ){
//     if(orignal == ""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = orignal[0];
//     subset(ans,orignal.substr(1));
//     subset(ans+ch,orignal.substr(1));
// }
// int main(){
//     string str = "aab";
//     subset("",str);
// }


#include<iostream>
using namespace std;
void subset(string ans , string orignal , int i){
    if(orignal.size() == i){
        cout<<ans<<endl;
        return;
    }
    char c = orignal[i];
    subset(ans,orignal,i+1);
    subset(ans+c,orignal,i+1);
}
int main(){
    string str = "abc";
    subset("",str,0);
}