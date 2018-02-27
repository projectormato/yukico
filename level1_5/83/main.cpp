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
  int n;
  string result = "";
  cin >> n;

  if (n%2 == 1) {
    result += "7";
    rep(i, n/2-1){
      result += "1";
    }
  }else{
    rep(i, n/2){
      result += "1";
    }
  }

  puts(result)
}
