#include<iostream>
#include<cmath>
using namespace std;
void reeec(string ans , string orig , int i) {
    if(orig.size() == i) {
        cout<<ans;
        return;
    }
    char ch = orig[i];
    if(ch != 'v'){
        reeec(ans+ch, orig , i+1);
        // ans+=ch; // we cannot do this
    }
    else {
        reeec(ans , orig , i+1);
    }
}

int main() {
    reeec( "" , "vinovvvvvvvvvvvvvvvvvvvvvvvvvd" ,0);
}
