#include <bits/stdc++.h>
using namespace std;

int main(){
  vector <pair<int, int> > n;
  int aux, r;
  for(int i=0;i<5;i++){
    r=0;
    for(int j=0;j<4;j++){
      scanf("%d", &aux);
      r+=aux;
    }
    n.push_back(make_pair(r, i+1));
  }
  sort(n.rbegin(), n.rend());
  printf("%d %d\n", n[0].second, n[0].first);
}  