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
  int n, INF = 100000000;
  cin >> n;
  queue<int> q;
  q.push(1);
  vector<int> dist(n+1, INF);
  dist[1] = 1;
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    int bit = bitset<32>(now).count();
    if (now-bit > 0 && dist[now-bit] == INF) {
      dist[now-bit] = dist[now]+1;
      q.emplace(now-bit);
    }
    if (now+bit <= n && dist[now+bit] == INF) {
      dist[now+bit] = dist[now]+1;
      q.emplace(now+bit);
    }
  }
  if (dist[n] == INF) {
    puts(-1)
  }else{
    puts(dist[n])
  }
}
