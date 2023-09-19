/*Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
A subarray is a contiguous part of an array.*/
// KADANE'S ALGORITHM
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
using namespace std;
int maxSumArray(int a[],int n);
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The maximum sum of sub array is\t"<<maxSumArray(a,n);
    return 0;
}
int maxSumArray(int a[],int n){
  int i;
    int maxSum=0;
    int curSum=0;
     maxSum=INT_MIN;
for(i=0;i<n;i++){
    curSum=curSum+a[i];
    if(curSum>maxSum)
        maxSum=curSum;
    if(curSum<0)
        curSum=0;
}
return maxSum;
}
