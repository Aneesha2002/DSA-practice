//Write an efficient program to print all the duplicates and their counts in the input string 
#include<vector>
#include<iostream>
using namespace std;

int findDuplicate(vector <int> &arr){
int ans=0;
for(int i=0;i<arr.size();i++){
    ans = ans^arr[i];
}
for(int i=1;i<arr.size();i++){
    ans = ans^i;
}
return ans;
}
int main(){
    int arr[] ={1,2,3,4,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = findDuplicate(*ans);
    return 0;
}