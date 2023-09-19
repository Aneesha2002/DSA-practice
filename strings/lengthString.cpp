#include<iostream>
using namespace std;
int getLength(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
return count;
}
int main(){
    char str[]="Success";
    cout<<"Length is: "<<getLength(str);
}