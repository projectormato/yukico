#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define gets(x) x; cin >> x;
#define puts(x) x; cout << x << endl;
#define list_input(x, n) x[n]; rep(i,n){ gets(x[i]);}
#define ll long long

int main(){
  int l, n, result;
  cin >> l >> n;
  int w[n];
  list_input(w, n)
  sort(w,w+n);
  rep(i,n){
    l -= w[i];
    if (0 > l) {
      result = i;
      break;
    }
  }
  puts(result)
}
