/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward.
 Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.*/
// Palindrome String

#include<iostream>
using namespace std;
bool isPalindrome(string s);
class Solution {
public:
bool isPalindrome(string s){
if(s.length()<=1)
return true;
int start=0,end=s.length()-1;
while(start<end){
    while(start<end && ! isalnum(s[start]))
    start++;
while(start < end && ! isalnum(s[end]))
end--;
if(start<end && tolower(s[start])!= tolower(s[end]))
return false;
start++;
end--;
}
return true;
}};
int main(){
    string s;
    bool x;
    cout<<"Enter input string\n";
    cin>>s;
    Solution obj;
    x=obj.isPalindrome(s);
    if(x==true)
        cout<<"Palindrome\n";
    else
    cout<<"No palindrome";
    return 0;
}