#include <bits/stdc++.h>
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl '\n'
#define int long long
using namespace std;

int sum (int* x, int* y){
    int p=*x, q=*y; //dereferencing pointers
    int add= p+q;
    return add;
}

void solve(){   
    int* a= new int (15); //data store into heap
    int* b= new int (19);
    int* k= new int (sum(a,b));
    cout<<*k<<endl;
    delete(a);
    delete(b);
    delete(k);
    
}

signed main(){
        solve();
}