//
//  main.cpp
//  6 june 21 round
//
//  Created by PRACHURYA PRAN SARMA'SVELAR on 06/06/21.
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

void subString(string str, int n)
{
    // Pick starting pointint
    int ad=0,i;
    vector<int> v;
    for (int len = 2; len <= n; len++)
    {
        // Pick ending point
        for ( i = 0; i <= n - len; i++)
        {
            //  Print characters from current
            // starting point to current ending
            // point.
            int j = i + len - 1;
            for (int k = i; k <= j; k++)
            { cout << str[k];
             if(str[i]=='D')
             {
                 ad++;
                 v.push_back(ad);
             }
                
            }
            ad=0;
            cout << endl;
        }
            
    }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<nn;
}

void solve()
{
    ll n,i,ad=0;
    cin>>n;
    string s;
    cin>>s;
    subString( s,  n);
    
    
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
