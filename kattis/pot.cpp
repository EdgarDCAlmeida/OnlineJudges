#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, b, c; long long int r=0; string a;
  scanf("%d", &n);
  while(n--){
    cin >> a;
    c = atoi(a.c_str()); c = c%10;
    a.pop_back(); b = atoi(a.c_str());
    r += pow(b, c);
  }
  printf("%lld\n", r);
}  