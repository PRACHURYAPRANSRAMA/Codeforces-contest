//
//  main.cpp
//  pq1.cpp
//
//  Created by PRACHURYA PRAN SARMA'SVELAR on 20/05/21.
//

#include<iomanip>
#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<string>
#include <iterator>
#include <map>
#include<math.h>

using namespace std;

#define pb     push_back
#define nn     endl
#define pll    pair<int,int>
#define ll     long long int
#define vll    vector<int>
#define all(a) (a).begin(),(a).end()
#define x       first
#define y      second
#define sz(x)  (int)x.size()
#define hell   1000000007
#define lbnd   lower_bound
#define ubnd   upper_bound
#define bs     binary_search
#define mi     map<int,int>
#define gcd(a,b)  __gcd((a),(b))
#define lcm(a,b)  ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie
//int msbPos(ll n)
//{
//    int msb_p = -1;
//    while (n)
//    {
//        n = n>>1;
//        msb_p++;
//    }
//    return msb_p;
//}
//
//// Function to find Bit-wise & of all numbers from x
//// to y.
//ll andOperator(ll x, ll y)
//{
//    ll res = 0; // Initialize result
//
//    while (x && y)
//    {
//        // Find positions of MSB in x and y
//        int msb_p1 = msbPos(x);
//        int msb_p2 = msbPos(y);
//
//        // If positions are not same, return
//        if (msb_p1 != msb_p2)
//            break;
//
//        // Add 2^msb_p1 to result
//        ll msb_val =  (1 << msb_p1);
//        res = res + msb_val;
//
//        // subtract 2^msb_p1 from x and y.
//        x = x - msb_val;
//        y = y - msb_val;
//    }
//
//    return res;
//}

//int  bitwiseAndOdd(int n)
//{
//    // Initialize result to 1
//    int result = 1;
//
//    // Starting from 3, bitwise AND
//    // all the odd integers less
//    // than or equal to n
//    for (int i = 3; i <= n; i = i + 2) {
//        result = (result & i);
//        if (result==0){return i;}
//    }
//    //return result;
//}

void solve()
{
    ll n,ad,i;
    cin>>n;
    ll result=n;
    for (int i = 1; i < n;  i++) {
        result = (result & (n-i));

        if (result==0){ cout<<n-i<<nn;return;}
    }


}
//void solve()
//{
//    ll n,ad,i;
//    cin>>n;
//    ll result=n;
//    for (int i = 1; i <=n;  i++) {
//        result = (result && (n-i));
//
//        if (result==0){cout<<n-i<<nn;return;}
//    }
//
    
}




int main()

{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
}
