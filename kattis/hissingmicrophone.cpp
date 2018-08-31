#include <bits/stdc++.h>
using namespace std;

int main(){
  string a;
  cin >> a;
  for(int i=1;i<a.size();i++){
    if(a[i]=='s' && a[i-1]=='s'){
      printf("hiss\n"); return 0;
    }
  }
  printf("no hiss\n");
}  