#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0;
    stack <int> st;
    cin>>x;
    while(x!=0)
    {
        st.push(x%2);
        x=x/2;
    }
    while(st.empty()!=true)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
