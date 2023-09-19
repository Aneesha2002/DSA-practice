#include<iostream>
using namespace std;
void reverse(char str[],int n){
   for(int i=0;i<n/2;i++){
    char temp = str[i];
    str[i]=str[n-i-1];
    str[n-i-1]= temp;
   }
}
int main(){
    char str[]="Nero";
    int n=sizeof(str)/sizeof(str[0]);
         reverse(str,n);
    for(int i=0;i<n;i++)
        cout<<str[i]<<"\t";
}