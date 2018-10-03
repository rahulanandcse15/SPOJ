#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define rep(i,n)            for(ll i=0;i<n;i++)
#define hell                1000000007LL
#define vi                  vector<ll>
#define vii                 vector< vi >
#define pb                  push_back
#define mp                  make_pair
#define fi                  first
#define se                  second
#define pii                 pair<ll,ll>
#define all(c)              c.begin(),c.end()
#define mini(c)             min_element(all(c))
#define maxi(c)             max_element(all(c))
#define sz(c)               c.size()
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
ll Max(ll a, ll b) { return a > b ? a : b; }
ll Min(ll a, ll b) { return a < b ? a : b; }
ll power(ll x, ll y,ll p)
{
    ll res=1;
    x=x%p;
    while(y>0)
    {
        if(y&1)
            res=((res%p)*(x%p))%p;
        y=y>>1;
        x=((x%p)*(x%p))%p;
    }
    return res;
}
int main()
{
    ll n;
    scanf("%lld",&n);
    vi arr(n);
    rep(i,n) scanf("%lld",&arr[i]);
    unordered_map<ll,ll> lhs,rhs;
    rep(i,n)
    {
        rep(j,n)
        {
            rep(k,n)
            {
                lhs[arr[i]*arr[j]+arr[k]]++;
                if(arr[i]!=0) rhs[arr[i]*(arr[j]+arr[k])]++;
            }
        }
    }
    ll ans=0;
    for(auto i:lhs)
    {
        if(rhs.find(i.fi)!=rhs.end())
        {
            ans+=(rhs[i.fi]*(i.se));
        }
    }
    printf("%lld",ans);
    return 0;
}
 
