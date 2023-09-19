#include <iostream>
#include <unordered_set>
using namespace std;
int countDistinct(int arr1[],int arr2[],int n1,int n2){
unordered_set<int> s;
for(int i=0;i<n1;i++){
    s.insert(arr1[i]);
}
for(int i=0;i<n2;i++){
    s.insert(arr2[i]);
}
return s.size();
}

int main(){
    int arr1[]={5,10,15,5,4,5}; // 5 10 15 4
    int arr2[]={15,6,12,10}; // 6 12 
    int n1 =sizeof(arr1)/sizeof(arr1[0]);
    int n2 =sizeof(arr2)/sizeof(arr2[0]);
   cout<<"The distinct elements count is "<<countDistinct(arr1,arr2,n1,n2)<<endl;
}