
#include<bits/stdc++.h>

using namespace std;
 
#define ll long long
#define pb push_back
#define pf push_front
#define mp make_pair
#define ff(s, f) for(ll i=s; i<=f; i++)
#define fr(s, f) for(ll i=s; i>=f; i--)
#define ffi(s,f) for(ll i=s; i<=f; i++)
#define ffj(s, f) for(ll j=s; j<=f; j++)
#define tc ll t;cin>>t;while(t--)
#define CYR cout<<"YES\\n";return
#define CNR cout<<"NO\\n";return 
#define cyr cout<<"Yes\\n";return
#define cnr cout<<"No\\n";return
#define sc second
#define fs first
#define c(a) cout<<a<<endl
#define all(a) a.begin(),a.end()
#define pi 3.14159265359
#define nl cout<<"\\n"
#define sp " "
#define fIO ios::sync_with_stdio(false); cin.tie(0);

void solve()
{
    ll n, m, k; cin >> n >> m >> k;
    vector<bool> b(n, true);
    for(ll i=0; i<m; i++)
    {
        ll temp; cin >> temp; // do nothing kekw
    }
    for(ll i=0; i<k; i++)
    {
        ll temp; cin >> temp;
        b[temp-1] = 0;
    }

    ll sum = 0;
    for(ll i=0; i<n; i++)
        sum += b[i] ? 1 : 0;
    
    for(ll i=0; i<m; i++)
    {
        bool def = b[i];
        b[i] = 0;
        if(def) sum--;
        cout << (sum == 0 ? '1' : '0');
        if(def) sum++;
        b[i] = def;
    }
    cout << endl;
}

int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}

