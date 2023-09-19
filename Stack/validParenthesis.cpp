#include <iostream>
#include <string>
#include <unordered_map>
#include <stack>
using namespace std;
bool validParenthesis(string str){
    unordered_map<char,char> mp ={{'}','{'},{')','('},{']','['}};
    stack<char> s;
    for(char c:str){
        if(c=='[' ||c=='{' ||c=='(' ){
            s.push(c);
        }else{
            if(s.empty() || s.top()!=mp[c]){
         return false;
            }
            s.pop();
        }
    }
    return s.empty();
}
int main(){
    string str="{)(}";
    if(validParenthesis(str)){
        cout<<"valid parenthesis"<<endl;
    }else{
        cout<<"invalid parenthesis"<<endl;
    }
}