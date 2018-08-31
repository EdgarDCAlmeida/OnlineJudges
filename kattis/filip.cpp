#include <bits/stdc++.h>
using namespace std;

int main(){
  string a, b;
  cin >> a >> b;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  if(atoi(a.c_str()) > atoi(b.c_str())) cout << a;
  else cout << b;
  printf("\n");
}  