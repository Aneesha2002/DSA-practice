//So, the overall time complexity of your code is O(n), where n is the length of the character array.
//So, the overall space complexity of your code is O(n), where n is the length of the character array.
#include<iostream>
using namespace std;
int  palindromeString(char str[],int n){
for(int i=0,j=n-1;i<n;i++,j--){
    if(str[i]!=str[j])
    return false;
}
return true;
}
int main(){
    char str[]="cat";
    int n=sizeof(str)/sizeof(str[0]);
    if(palindromeString(str,n-1)){
        cout<<"Palindrome";
    }else
    {
        cout<<"Not Palindrome";
    }
}