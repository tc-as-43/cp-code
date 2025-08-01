#include<bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define fileio freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
 
int MOD=1e9+7;
#define int long long int
#define ll long long
#define ld long double
#define uint unsigned long long
#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define vd vector<double>
#define sti set<int>
#define msti multiset<int>
#define usti unordered_set<int>
#define stk stack<int>
#define vvi vector<vi>
#define pi pair<int, int>
#define vpi vector<pi>
#define di deque<int>
#define qi queue<int>
#define mpi map<int, int>
#define mps map<string, int>
#define mxhp priority_queue<int> 
#define mnhp priority_queue<int, vector<int>, greater<int>>
 
#define bin(x,y)  bitset<y>(x) 
#define each(x, v) for(auto& x: v)
#define fr(i,n) for(int i=0; i<(n); i++)       
#define rep(i,a,b) for(int i=(a); i<=(b); i++)      
#define rrep(i,a,b) for(int i=(a); i>=(b); i--)    
#define loop(i, s, e, in) for(int i=(s); i<=(e); i+=(in))   
#define str to_string()
#define sz(x) (int)(x.size()) 
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend() 
#define srt(v)  sort(v.begin(),v.end())
#define rsrt(v)  sort(v.rbegin(),v.rend())
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())  
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
 
#define ff first 
#define ss second 
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define nl cout<<"\n"
#define yes cout << "Yes\n" 
#define Yes cout << "YES\n" 
#define no cout << "No\n" 
#define No cout << "NO\n" 
#define dbg(var) cout<<#var<<"="<<var<<" "
#define round(n) cout << fixed << setprecision(n)
 
 
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
 
 
void solve(){
    
    int n=1;
    cin>>n;
    
    vi v(n);
    
    fr(i, n)
    {
        cin >> v[i];
    }
    
    
}
 
int32_t main()
{
    fastio;
 
    int T = 1;
    cin >> T;
    
    rep(i, 1, T)
    {
        //cout << "Case " << i << ": ";
        solve();
    }
 
    return 0;
}
