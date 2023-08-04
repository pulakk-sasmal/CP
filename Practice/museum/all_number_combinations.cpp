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

string kthPermutation(int n, int k){
    string s;
    
    vector<int> f(10, 1);
    for(int i=1; i<=9; i++)
        f[i] = f[i-1]*i;
    
    set<char> st;
    for(int i='1'; i-'0' <= n; i++)
        st.insert(i);
    
    while(!st.empty()){
        int n = st.size();
        int u = (k-1) / (f[n]/n);
            
        int i = 0;
        for(auto c : st){
            if(i == u){
                s.push_back(c);
                st.erase(c);
                break;
            }
            else i++;
        }
        k -= u * (f[n]/n);
    }
    return s;
}

signed main(){
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string ans = kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}