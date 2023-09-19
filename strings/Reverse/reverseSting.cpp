#include<iostream>
using namespace std;
void reverse(char str[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(str[start++],str[end--]);
    }
}
int main(){
    char str[]="Success";
    int n=sizeof(str)/sizeof(str[0]);
         reverse(str,n);
    for(int i=0;i<n;i++)
        cout<<str[i]<<"\t";
}