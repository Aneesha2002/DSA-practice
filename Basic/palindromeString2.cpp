//So, the overall time complexity of your code is O(n)
//So, the overall space complexity of your code is O(n)
#include <string> 
#include <iostream>
using namespace std; 
bool checkPalindrome(string s)
{
 int n = s.length();
 int i=0,j=n-1;
 while(i<j){
    while(i<j && !isalnum(s[i])){
    i++;}
      while(i<j && !isalnum(s[j])){
    j--;}
    if(tolower(s[i])!=tolower(s[j]))
    return false;
    i++;
    j--;
 }  
 return true; 
}
int main(){
     string str="a1 _B &b *1a";
    if(checkPalindrome(str)){
        cout<<"Palindrome";
    }else
    {
        cout<<"Not Palindrome";
    }
}
