//Time Complexity: O(n^2)
//Space Complexity: O(1)
#include<iostream>
#include<climits>
using namespace std;
void maxMinEle(int arr[],int n){
int minEle,minE=INT_MAX;
int maxEle,maxE=INT_MIN;
for(int i=0;i<n-1;i++){
 for(int j=i+1;j<n;j++){
  if(arr[i]<arr[j]){
    minEle= arr[i];
      minE = min(minEle,minE);
       maxEle = arr[j];
  maxE = max(maxEle,maxE); 
  }else{
    minEle= arr[j];
      minE = min(minEle,minE);
       maxEle = arr[i];
  maxE = max(maxEle,maxE); 
  }

} 
}
cout<<"Max is: "<<maxE;
cout<<" Min is: "<<minE;

} 
int main(){
    int arr[] = {7,3,4,2,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxMinEle(arr,n);
}