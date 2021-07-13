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

int gcD(int n1,int n2) {
    int hcf;
    //cout << "Enter two numbers: ";
    //cin >> n1 >> n2;
    
    // Swapping variables n1 and n2 if n2 is greater than n1.
    if ( n2 > n1) {
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }
    
    for (int i = 1; i <=  n2; ++i) {
        if (n1 % i == 0 && n2 % i ==0) {
            hcf = i;
        }
    }
    
    //cout << "HCF = " << hcf;
    return hcf;
}

void solve()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"0 0"<<nn;
        return ;
    }
    if(b-a==1||a-b==1)
    {
        cout<<"1 0"<<nn;
        return ;
    }
    if(gcD(a+1,b+1)==b-a||gcD(a+1,b+1)==a-b)
    {
        cout<<gcD(a+1, b+1)<<" 1"<<nn;
        return ;
    }
    else{
        if(b>=a)
        {
        cout<<b-a<<" "<<a<<nn;
            return ;
    }
        else{
            cout<<a-b<<" "<<b<<nn;
        }
    }
    
    
    
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
