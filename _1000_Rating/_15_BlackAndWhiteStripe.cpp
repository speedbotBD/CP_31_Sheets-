//CP-31 Sheets : 15 No Problem 
#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back


void solve()
{
     //Code Here
     int n, k;
     string s;
     cin >> n >> k >> s;
     
     vector<int> prefix_sum(n+1);
     prefix_sum[0] = 0; 
     
     for(int i=1;i<=n;i++){
       
       if(s[i-1] == 'B'){
         prefix_sum[i] = prefix_sum[i-1] + 0;
       }else{
         prefix_sum[i] = prefix_sum[i-1] + 1;
       }
       
       
     }
     
     
     int a = INT_MAX;
     for(int i=1,j=k;i<=n-k+1;i++,j++){
       int ans = prefix_sum[j] - prefix_sum[i-1];
       a = min(a, ans);
     }
     
     cout << a << endl;
     
     
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
