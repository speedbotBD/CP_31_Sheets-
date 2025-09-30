// 26. Buying Torches
#include <bits/stdc++.h>
using namespace std;
 
#define ll            long long
#define ull           unsigned long long
#define pb            push_back



 
 
 
void solve()
{
     //Code Here
     ll x, y, k;
     cin >> x >> y >> k;

     ll second_trade = k;                                      //2nd trade -> For Make k Torches,
                                                               //             We Need k coals

     ll first_trade = ceil((double)((k*y)+k-1)/(x-1));         //1st trade -> We Need "k*y" sticks for trade "2nd trade" & make k coals 
                                                               //             for make k tarches, we need k sticks so -> k, initially 1 Stick 
     cout << first_trade + second_trade << endl;               //             Final-> k*y+k-1
}                                                              //             each trade sticks increase by x-1 times
                                                               //             so, first_trade = ceil((double)((k*y)+k-1)/(x-1))
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