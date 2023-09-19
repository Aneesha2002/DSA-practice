// time complexity of your code is O(n)
// space complexity for the character array is O(n)
#include<iostream>
using namespace std;
int main(){
    char str[]="Aneesha"; // 8-2 = 6
    int n=sizeof(str)/sizeof(str[0]);
   for(int i=n-2;i>=0;i--)
    cout<<str[i];
}