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

void SacredSoul(){
    vector<string> v(2);
    cin>>v[0]>>v[1];

    int t, q;
    cin>>t>>q;

    set<int> st;
    for(int i=0; i<v[0].size(); i++)
        if(v[0][i] != v[1][i]) st.insert(i);
    // debug(st);
    
    vector<int> b(q+10, -1);

    for(int i=0; i<q; i++){
        int ch; 
        cin>>ch;

        if(b[i] != -1)
            st.insert(b[i]);

        if(ch == 1){
            int pos; 
            cin>>pos;
            pos--;

            if(st.find(pos) != st.end()){
                st.erase(st.find(pos));
                if(i+t < q+10) b[i+t] = pos;
            }
        }

        else if(ch == 2){
            int x, pos1, y, pos2;
            cin>>x>>pos1>>y>>pos2;
            x--, pos1--, y--, pos2--;

            swap(v[x][pos1], v[y][pos2]);

            if(v[0][pos1] == v[1][pos1]){
                if(st.find(pos1) != st.end())
                    st.erase(pos1);
            } else {
                st.insert(pos1);
            }

            if(v[0][pos2] == v[1][pos2]){
                if(st.find(pos2) != st.end())
                    st.erase(pos2);
            } else {
                st.insert(pos2);
            }
        }

        else{
            cout << (st.empty() ? "YES\n" : "NO\n");
        }

        // debug(st);
    }
}

signed main(){
    fastIO;
    int t=1;
    cin>>t;
    while (t--){
        SacredSoul();
    }
}