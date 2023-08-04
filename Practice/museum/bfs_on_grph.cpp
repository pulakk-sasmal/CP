#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define endl '\n'
using namespace std;

//void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#define prnt(v) for(auto i:v) cout<<i<<" " ; cout<<endl;
#define trnf(s,v) for(auto i:s) v.push_back(i);
#define all(v) v.begin(),v.end()
#define inp(v,n) vector<int> v(n); for(int i=0; i<n;i++)cin>>v[i];
#define say(x) cout<<(x==1 ? "YES\n":"NO\n")
#define rep(i,x,n) for(int i=x; i<n; i++)
#define rrep(i,n,x) for(int i=n; i>=x; i--)
#define pb push_back
#define ff first
#define ss second
const int mod = 1000000007;
const int N = 500010;
const int inf = 1e18;

bool bySec(pair<int,int> &a, pair<int,int> &b){
    return (a.ss > b.ss);
}

void SacredSoul(){
    int n, m, k;
    cin>>n>>m>>k;

    vector<pair<int,int>> x(k);

    for(int i=0; i<k; i++) cin>>x[i].ff;
    for(int i=0; i<k; i++) cin>>x[i].ss;
    sort(all(x), bySec);

    vector<vector<int>> g(n+1);
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    vector<int> vis(n+1, 0);

    queue<pair<int,int>> q;

    for(int i=0; i<k; i++){
        q.push({x[i]});
        vis[x[i].ff] = x[i].ss;
    }
    
    while(!q.empty()){
        auto y = q.front();
        q.pop();

        for(auto ch : g[y.ff]){
            if(vis[ch] >= y.ss-1) continue;
            vis[ch] =  y.ss-1;
            q.push({ch, vis[ch]});
        }
    }

    for(int i=1; i<=n; i++){
        if(vis[i] == 0){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

signed main(){
    fastIO;
    int t=1;
    cin>>t;
    while (t--){
        SacredSoul();
    }
}