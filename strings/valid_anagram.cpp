/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.*/

#include<iostream>
using namespace std;
class Solution{
public:
 bool Anagram(string s, string t){
     int count_s[26]={0},count_t[26]={0};
     for(char ch: s)
     count_s[ch-'a']++;
      for(char ch: t)
     count_t[ch-'a']++;
     for(int i=0;i<26;i++)
        if(count_s[i]!=count_t[i])
        return false;
        return true;
 }};
 int main(){
     string s,t;
     bool x;
     cout<<"Enter two strings";
     cin>>s>>t;
     Solution obj;
     x=obj.Anagram(s,t);
    if(x==true)
        cout<<"true\n";
    else
    cout<<"false";
 }