//https://www.spoj.com/problems/TRUCKL/en/
#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back


void solve()
{
     //Code Here
     ll n, x;
     cin >> n >> x;
     
     vector<ll> v(n);
     for(auto &it: v)
        cin >> it;
        
      ll l = v[0] - x;
      ll r = v[0] + x;
      ll ans  = 0;
      
      for(int i=1;i<n;i++){
        
         l = max(l, v[i] - x);
        
         r = min(r, v[i] + x);
        
        if(l > r){
          ans++;
          l = v[i] - x;
          r = v[i] + x;
        }
        
      }
      
      cout << ans << endl;
   
     
}
 
int main() 
{   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--)
    {
      solve();
    }
 
    
    return 0;
}
