#include <bits/stdc++.h>
using namespace std;

int expo(int b, int e){
  if(b==1 || e==1) return b;
  int r = expo(b, e/2) * expo(b, e/2);
  if(e&1) r *= b;
  return r;
}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d\n", expo((expo(2, n) +1), 2));
}  