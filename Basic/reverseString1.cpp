// Time Complexity: O(n) where 'n' is the length of the string.
// Space Complexity: O(1), constant space used for temporary variables.
#include<iostream>
using namespace std;
void swap(int a,int b){
    char temp = a;
    a=b;
    b = temp;

}
 void reverseString(char str[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
 }
int main(){
    char str[]="Aneesha";
    int n=sizeof(str)/sizeof(str[0]);
    reverseString(str,n-1);
    cout<<str<<endl;
}