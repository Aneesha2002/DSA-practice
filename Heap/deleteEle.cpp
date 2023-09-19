#include <iostream>
using namespace std;
void heapify(int arr[],int n , int i){
    
}
void deleteRoot(int arr[],int n){
    int lastElement = arr[n-1];
    arr[0]=lastElement;
    n = n-1;
    heapify(arr,n,0);

}
void printArray(int arr[] ,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[] = { 10, 5, 3, 2, 4 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    deleteRoot(arr, n);
 
    printArray(arr, n);
 
    return 0;
}