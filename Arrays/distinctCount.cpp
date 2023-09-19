#include <iostream>
#include <unordered_set>
using namespace std;
int countDistinct(int arr[],int n){
unordered_set<int> s;
for(int i=0;i<n;i++){
    s.insert(arr[i]);
}
return s.size();
}

int main(){
    int arr[]={5,10,15,5,4,5};
    int n =sizeof(arr)/sizeof(arr[0]);
   cout<<"The distinct elements count is "<<countDistinct(arr,n)<<endl;
}