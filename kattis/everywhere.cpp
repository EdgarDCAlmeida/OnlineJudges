#include <bits/stdc++.h>
using namespace std;
#define INF 0x3F3F3F3F
#define MAXN 1
#define pb push_back
#define mp make_pair
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<int> vi;


int main(){
  int q, n;
  string a;
  set <string> trip;
  scanf("%d", &q);
  while(q--){
    trip.clear();
    scanf("%d", &n);
    while(n--){
      cin >> a;
      trip.insert(a);
    }
    printf("%d\n", (int)trip.size());
  }
}