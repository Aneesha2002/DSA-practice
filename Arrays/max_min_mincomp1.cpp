//Maximum and minimum of an array using minimum number of comparisons
#include<iostream>
using namespace std;
int main(){
int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int max,min;
    if(n==1){
        max=a[0];
        min=a[0];
    }
    else{
if(a[0]>a[1]){
max=a[0];
min=a[1];
}
else{
    max=a[1];
    min=a[0];
}
        for(i=2;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
            if(a[i]<min){
              min=a[i];
            }
            }}
  cout<<"Maximum value="<<max<<endl;
  cout<<"Minimum value="<<min<<endl;
}