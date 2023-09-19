#include<iostream>
using namespace std;
void heapify(int arr[],int n,int lar){
int largest = lar;
int l = 2*lar+1;
int r = 2*lar+2;


if(l<n && arr[l]>arr[lar]){
    lar = l;
}
if(r<n && arr[r]>arr[lar]){
    lar = r;
}
cout<<"largest again :"<<lar<<endl;
if(largest!=lar){
    swap(arr[lar],arr[largest]);
    heapify(arr,n,lar);
}
}
void heapSort(int arr[] , int n){    
for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }
}
int main(){
    int arr[] = {4,3,7,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}