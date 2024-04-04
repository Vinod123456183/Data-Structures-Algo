/*to rev stack using rec */
/*push at Bottom stack*/
#include<iostream>
#include<stack>
using namespace std;
void dis(stack<int>&st){
    if(st.size()==0) return;
    cout<<st.top()<<" ";
    st.pop();
    dis(st);
}
int main() {
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    dis(st);
}
