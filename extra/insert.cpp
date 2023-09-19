#include<iostream>
using namespace std;
void ins(int arr[],int n){
for(int i=1;i<n;i++){
int j=i-1;
   int key = arr[i];
while(j>=0 && key<arr[j]){
arr[j+1]= arr[j];
j--;}
arr[j+1]=key;}
}
int main(){
    int arr[]= {5,2,3,1,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    ins(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}