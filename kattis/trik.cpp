#include <bits/stdc++.h>
using namespace std;

int main(){
  int v[3] = {1, 0, 0};
  string a;
  cin >> a;
  for(int i=0;i<a.size();i++){
    if(a[i]=='A') swap(v[0], v[1]);
    else if(a[i]=='B') swap(v[1], v[2]);
    else if(a[i]=='C') swap(v[0], v[2]);
  }
  for(int i=0;i<3;i++){
    if(v[i]==1){
      printf("%d\n", i+1); break;
    }
  }
}
