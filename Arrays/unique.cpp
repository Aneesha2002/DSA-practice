#include <iostream>
using namespace std;
int findUnique(int *arr, int n)
{  int ans=0;
  for (int i = 0; i < n; i++) {
  ans = ans^arr[i];
  }
  return ans;
}
int main(){
    int arr[]={3,1,3,4,4}; 
    int n=sizeof(arr)/sizeof(arr[0]);
  cout<<  findUnique(arr,n)<<endl;

}