#include<iostream>
using namespace std;
bool palindrome(char str[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
    if(str[s]!=str[e]){
    return 0;}
        s++;
        e--;}
   return 1;
}
int main(){
    char str[]="aba";
    int n=sizeof(str)/sizeof(str[0]);
      n=n-1;
    if(palindrome(str,n)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
}