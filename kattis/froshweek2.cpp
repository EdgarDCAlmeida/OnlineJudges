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
  int n, m, cont=0, aux;
  vi tasks;
  vi time;
  scanf("%d %d", &n, &m);
  while(n--){
    scanf("%d", &aux);
    tasks.pb(aux);
  }
  while(m--){
    scanf("%d", &aux);
    time.pb(aux);
  }
  sort(tasks.rbegin(), tasks.rend());
  sort(time.rbegin(), time.rend());
  int i=0, j=0;
  for(i=0;i<tasks.size();i++){
    if(tasks[i]<=time[j]){
      cont++;
      j++;
    }
  }
  printf("%d\n", cont);
}