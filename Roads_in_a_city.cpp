#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
// typedef tree<long long, null_type, less_equal<>, rb_tree_tag, tree_order_statistics_node_update> indexed_multiset; using " less_equal<> " makes it a multiset
template<typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long>vll;
typedef vector<vector<long long>>vvll;
typedef pair<long long,long long>pll;
typedef pair<int,int> pii; 
template <typename T> using vc = vector<T>;
template <typename T> using vvc = vector<vc<T>>;
template <typename T> using vvvc = vector<vvc<T>>;
using vi = vc<int>;
using vl = vc<ll>;
using vpi = vc<pii>;
using vpl = vc<pll>;
template <class T> using pq = priority_queue<T>;
template <class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
template <typename T> int si(const T &x) { return x.size(); }
#define overload5(a, b, c, d, e, name, ...) name
#define overload4(a, b, c, d, name, ...) name
#define fore(...) overload5(__VA_ARGS__, fore4, fore3, fore2, fore1, fore0)(__VA_ARGS__)
#define overload2(_1, _2, name, ...) name
#define endl "\n"
#define sq(x) (long long)sqrt(x)
#define REP0(n) for(ll jidlsjf = 0; jidlsjf < n; ++jidlsjf)
#define REP1(i, n) for(ll i = 0; i < (n); ++i)
#define REP2(i, a, b) for(ll i = (a); i < (b); ++i)
#define REP3(i, a, b, c) for(ll i = (a); i < (b); i += (c))
#define per0(n) for(int jidlsjf = 0; jidlsjf < (n); ++jidlsjf)
#define per1(i, n) for(ll i = (n)-1; i >= 0; --i)
#define per2(i, a, b) for(ll i = (a)-1; i >= b; --i)
#define per3(i, a, b, c) for(ll i = (a)-1; i >= (b); i -= (c))
#define fore1(i, a) for(auto &&i : a)
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define eb emplace_back
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define rng(v, l, r) v.begin() + (l), v.begin() + (r)
#define all(c) begin(c), end(c)
#define rall(c) rbegin(c), rend(c)
#define SORT(v) sort(all(v))
#define REV(v) reverse(all(v))
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define UNIQUE(x) SORT(x), x.erase(unique(all(x)), x.end())
template <typename T = ll, typename S> T SUM(const S &v) { return accumulate(all(v), T(0)); }
void scan(int &a) { cin >> a; }
void scan(long long &a) { cin >> a; }
void scan(char &a) { cin >> a; }
void scan(double &a) { cin >> a; }
void scan(string &a) { cin >> a; }
template <class T, class S> void scan(pair<T, S> &p) { scan(p.first), scan(p.second); }
template <class T> void scan(vector<T> &);
template <class T> void scan(vector<T> &a) {
    for(auto &i : a) scan(i);
}
template <class T, class S> pair<T, S> operator-(const pair<T, S> &x) { return pair<T, S>(-x.first, -x.second); }
template <class T, class S> pair<T, S> operator-(const pair<T, S> &x, const pair<T, S> &y) { return pair<T, S>(x.fi - y.fi, x.se - y.se); }
template <class T, class S> pair<T, S> operator+(const pair<T, S> &x, const pair<T, S> &y) { return pair<T, S>(x.fi + y.fi, x.se + y.se); }
template <class T> pair<T, T> operator&(const pair<T, T> &l, const pair<T, T> &r) { return pair<T, T>(max(l.fi, r.fi), min(l.se, r.se)); }
template <class T, class S> pair<T, S> operator+=(pair<T, S> &l, const pair<T, S> &r) { return l = l + r; }
template <class T, class S> pair<T, S> operator-=(pair<T, S> &l, const pair<T, S> &r) { return l = l - r; }
template <class T> bool intersect(const pair<T, T> &l, const pair<T, T> &r) { return (l.se < r.se ? r.fi < l.se : l.fi < r.se); }

template <class T> vector<T> &operator++(vector<T> &v) {
    fore(e, v) e++;
    return v;
}
template <class T> vector<T> operator++(vector<T> &v, int) {
    auto res = v;
    fore(e, v) e++;
    return res;
}
template <class T> vector<T> &operator--(vector<T> &v) {
    fore(e, v) e--;
    return v;
}
template <class T> vector<T> operator--(vector<T> &v, int) {
    auto res = v;
    fore(e, v) e--;
    return res;
}
template <class T> vector<T> &operator+=(vector<T> &l, const vector<T> &r) {
    fore(e, r) l.eb(e);
    return l;
}
template <class T> void scan(T &a) { cin >> a; }
template <typename T, typename S> T ceil(T x, S y) {
    assert(y);
    return (y < 0 ? ceil(-x, -y) : (x > 0 ? (x + y - 1) / y : x / y));
}
 
template <typename T, typename S> T floor(T x, S y) {
    assert(y);
    return (y < 0 ? floor(-x, -y) : (x > 0 ? x / y : x / y - (x % y == 0 ? 0 : 1)));
}
template <class T> T POW(T x, int n) {
    T res = 1;
    for(; n; n >>= 1, x *= x)
        if(n & 1) res *= x;
    return res;
}
template <class T, class S> T POW(T x, S n, const ll &mod) {
    T res = 1;
    x %= mod;
    for(; n; n >>= 1, x = x * x % mod)
        if(n & 1) res = res * x % mod;
    return res;
}
vector<pll> factor(ll x) {
    vector<pll> ans;
    for(ll i = 2; i * i <= x; i++)
        if(x % i == 0) {
            ans.push_back({i, 1});
            while((x /= i) % i == 0) ans.back().second++;
        }
    if(x != 1) ans.push_back({x, 1});
    return ans;
}
template <class T> vector<T> divisor(T x) {
    vector<T> ans;
    for(T i = 1; i * i <= x; i++)
        if(x % i == 0) {
            ans.pb(i);
            if(i * i != x) ans.pb(x / i);
        }
    return ans;
}
template <class T> bool is_prime(T x) {
    if(x<2) return false;
    for(T i = 2; i * i <= x; i++)
        if(x % i == 0) {
            return false;
        }
    return true;
}
template <class T> vector<T> prime_factors(T x) {
    vector<T> ans;
    for(T i = 2; i * i <= x; i++){
        while(x % i == 0) {
            ans.pb(i);
            x/=i;
        }
    }
    if(x>1) ans.pb(x);
    return ans;
}
template <class T> vector<char> sieve_prime(T l,T r) {
    vector<char> ans(r-l+1,true);
    ll lim=sqrt(r);
    for(T i = 2; i <= lim; i++){
        for(T j=max(i*i,(l+i-1/(i*i)));j<=r;j+=i){
            ans[j-l]=false;
        }
    }
    if(l==1) ans[0]=false;
    return ans;
}
template <class T> vector<T> sieve_prime(T x) {
    vector<bool> ans(x+1,true);
    ans[0]=ans[1]=false;
    for(T i = 2; i * i <= x; i++){
        if(ans[i]){
            for(T j=i*i;j<=x;j+=i){
                ans[j]=false;
            }
        }
    }
    return ans;
}
ll max(int x, ll y) { return max((ll)x, y); }
ll max(ll x, int y) { return max(x, (ll)y); }
int min(int x, ll y) { return min((ll)x, y); }
int min(ll x, int y) { return min(x, (ll)y); }
ll pow2(int i) { return 1LL << i; }
int topbit(signed t) { return t == 0 ? -1 : 31 - __builtin_clz(t); }
int topbit(ll t) { return t == 0 ? -1 : 63 - __builtin_clzll(t); }
int lowbit(signed a) { return a == 0 ? 32 : __builtin_ctz(a); }
int lowbit(ll a) { return a == 0 ? 64 : __builtin_ctzll(a); }
int popcount(uint64_t t) { return __builtin_popcountll(t); }
static inline uint64_t popcount64(uint64_t x) {
    uint64_t m1 = 0x5555555555555555ll;
    uint64_t m2 = 0x3333333333333333ll;
    uint64_t m4 = 0x0F0F0F0F0F0F0F0Fll;
    uint64_t h01 = 0x0101010101010101ll;
 
    x -= (x >> 1) & m1;
    x = (x & m2) + ((x >> 2) & m2);
    x = (x + (x >> 4)) & m4;
 
    return (x * h01) >> 56;
}
bool ispow2(int i) { return i && (i & -i) == i; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> 
istream& operator >> (istream &is, T_container &v) { 
   for(T &x : v) is >> x; return is;
}
#ifdef __SIZEOF_INT128__
ostream& operator << (ostream &os, __int128 const& value){
    static char buffer[64];
    int index = 0;
    __uint128_t T = (value < 0) ? (-(value + 1)) + __uint128_t(1) : value;
    if (value < 0) 
        os << '-';
    else if (T == 0)
        return os << '0';
    for(; T > 0; ++index){
        buffer[index] = static_cast<char>('0' + (T % 10));
        T /= 10;
    }    
    while(index > 0)
        os << buffer[--index];
    return os;
}
istream& operator >> (istream& is, __int128& T){
    static char buffer[64];
    is >> buffer;
    size_t len = strlen(buffer), index = 0;
    T = 0; int mul = 1;
    if (buffer[index] == '-')
        ++index, mul *= -1;
    for(; index < len; ++index)
        T = T * 10 + static_cast<int>(buffer[index] - '0');
    T *= mul;    
    return is;
}
#endif
 
template<typename A, typename B> 
ostream& operator<<(ostream &os, const pair<A, B> &p) { 
   return os << '(' << p.first << ", " << p.second << ')'; 
}
 
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> 
ostream& operator << (ostream &os, const T_container &v) { 
   os << '{'; string sep; 
   for (const T &x : v) os << sep << x, sep = ", "; 
   return os << '}'; 
}
template<class P, class Q = vector<P>, class R = less<P> > ostream& operator << (ostream& out, priority_queue<P, Q, R> const& M){
    static priority_queue<P, Q, R> U;
    U = M;
    out << "{ ";
    while(!U.empty())
        out << U.top() << " ", U.pop();
    return (out << "}");
}
template<class P> ostream& operator << (ostream& out, queue<P> const& M){
    static queue<P> U;
    U = M;
    out << "{"; string sep;
    while(!U.empty()){
        out << sep << U.front(); sep = ", "; U.pop();
    }
    return (out << "}");
}
ll gcdex(ll a,ll b,ll &x,ll &y){
    // ax+by=gcd(a,b)
    if(b==0){
        y=0;
        x=1;
        return a;
    }
    ll x1,y1;
    ll d=gcdex(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}
ll gcd(ll a , ll b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}
const ll inf=1e18;
vvc<ll>g;
vll in,out,d;
ll timer=0;
vvc<ll>up;
void dfs(ll u,ll p){
    in[u]=++timer;
    up[0][u]=p;
    for(auto v:g[u]){
        if(v==p) continue;
        d[v]=d[u]+1;
        dfs(v,u);
    }
    out[u]=++timer;
}
void solve()
{
    //your code
    ll n;
    cin>>n;
    g.resize(n);
    REP1(i,n-1){
        ll u,v;
        cin>>u>>v;
        u--;v--;
        g[u].pb(v);
        g[v].pb(u);
    }
    vll a(n);
    cin>>a;
    a--;
    in.resize(n);out.resize(n);
    ll p=0;
    ll k=1;
    while((k<<1LL)<=n){
        k<<=1LL;
        p++;
    }
    up.resize(p+1,vc<ll>(n));
    d.resize(n);
    // function<void(ll,ll)> dfs=[&](ll u,ll p){
    //     in[u]=++timer;
    //     up[0][u]=p;
    //     for(auto v:g[u]){
    //         if(v==p) continue;
    //         d[v]=d[u]+1;
    //         dfs(v,u);
    //     }
    //     out[u]=++timer;
    // };
    dfs(0,0);
    REP2(i,1,p+1){
        REP1(j,n){
            up[i][j]=up[i-1][up[i-1][j]];
        }
    }
    auto is_ancestor=[&](ll u,ll v){
        return (in[u]<=in[v] && out[v]<=out[u]);
    };  
    auto lca=[&](ll u,ll v){
        if(is_ancestor(u,v)) return u;
        if(is_ancestor(v,u)) return v;
        per2(i,p+1,0){
            if(!is_ancestor(up[i][u],v)) u=up[i][u];
        }
        return up[0][u];
    };
    auto udis=[&](ll u,ll v){
        return (d[u]+d[v]-2*d[lca(u,v)]);
    };
    auto kth=[&](ll u,ll v,ll k){
        // u->v
        if(is_ancestor(u,v)){
            k=udis(u,v)-k;
            for(int i=20;i>=0;i--){
                if(k & (1LL<<i)){
                    v=up[i][v];
                }
            }
            return v;
        }
        if(is_ancestor(v,u)){
            for(int i=20;i>=0;i--){
                if(k & (1LL<<i)){
                    u=up[i][u];
                }
            }
            return u;
        }
        ll d=udis(u,lca(u,v));
        if(k<=d){
            for(int i=20;i>=0;i--){
                if(k & (1LL<<i)){
                    u=up[i][u];
                }
            }
            return u;
        }
        ll d2=udis(v,lca(u,v));
        k=d2-(k-d);
        for(int i=20;i>=0;i--){
            if(k & (1LL<<i)){
                v=up[i][v];
            }
        }
        return v;
    };
    cout<<a[0]+1<<" ";
    if(n==1) return;
    ll d1=a[0],d2=a[1];
    ll dia=udis(d1,d2);
    ll end1=kth(d1,d2,dia/2),end2=kth(d2,d1,dia/2);
    ll ans=min(end1,end2);
    cout<<ans+1<<" ";
    if(n==2) return;
    REP2(i,2,n){
        ll nw=a[i];
        ll dd1=udis(nw,d1),dd2=udis(nw,d2);
        ll mx=max(dd1,dd2);
        if(mx<dia){
            // donot change
            cout<<ans+1<<" ";
            continue;
        }
        else{
            dia=mx;
            if(dd1>=dd2){
                d2=nw;
                ans=min(kth(nw,d1,dia/2),kth(d1,nw,dia/2));
            }
            else{
                d1=nw;
                ans=min(kth(nw,d2,dia/2),kth(d2,nw,dia/2));
            }
            cout<<ans+1<<" ";
        }
    }cout<<endl;
    

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t=1;
    while(t--)
    {
    solve();
    }
    return 0;
}