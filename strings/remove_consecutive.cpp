#include <iostream>
#include <string.h>
using namespace std;
int main(){

  string a[] = {"abbbbcaaaababbbbcecccedeeed"};
  int n = a.length();
  int i, j, prev_char;

  prev_char = a[0] + 1;
  for (i = 0, j = 0; i < n; i++)
  {
    if (a[i] != prev_char)
    {
      a[j] = a[i];
      j++;
    }
    prev_char = a[i];
  }
  a[j] = '\0';
  cout<<"str ="<<a<<endl;
  return 0;
}