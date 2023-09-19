//Time Complexity: O(n)
//Space Complexity: O(1)
#include<iostream>
#include<climits>
using namespace std;
void maxMinEle(int arr[],int n){
int minEle=INT_MAX;
int maxEle=INT_MIN;
for(int i=0;i<n;i++){
  if(arr[i]<minEle){
    minEle= arr[i];
  }
    if(arr[i]>maxEle)
  {
       maxEle = arr[i];
  }
}
cout<<"Max is: "<<maxEle;
cout<<" Min is: "<<minEle;
} 
int main(){
    int arr[] = {6,4,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxMinEle(arr,n);
}