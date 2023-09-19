#include<iostream>
#include<string>
#include<stack>
using namespace std;
int prec(char ch){
if(ch=='^')
return 3;
else if (ch=='/' ||ch=='*' )
return 2;
else if (ch=='+' ||ch=='-' )
return 1;
else return -1;
}
string infixToPostfix(string s){
    stack<char> st;
    string ans="";
    for(int i=0;i<s.length();i++){
        char ch =s[i];
        if((ch>='a' && ch<='z' ) || (ch>='A' && ch<='Z' )){
            ans+=ch;
        }else if(ch=='('){
            st.push(ch);
        }else if(ch==')'){
            while(st.top()!='('){
                ans +=st.top();
                st.pop();
        }
        st.pop();
    }else{
        while(!st.empty()  && prec(s[i])<= prec(st.top())){
            ans +=st.top();
            st.pop();
        }
        st.push(ch);
    }
}
while(!st.empty()){
    ans+=st.top();
    st.pop();
}
return ans;
} 
int main(){
    string s="m*n+(p-q)+r";
    cout<<s<<endl;
     cout<<infixToPostfix(s)<<endl;
}                                         