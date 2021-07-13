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
//
//
//
//int count(int a[], int n)
//{
//    int  ad=0;
//    if((a[n-1]+a[1])/2!=a[0]){ad++;}
//if((a[n-2]+a[0])/2!=a[n-1]){ad++;}
//    for (int i = 0; i < n-2; i++)
//       if((a[i]+a[i+2])/2!=a[i+1]){ad++;}
//    return ad;
//}
//
//
//void display(int a[], int n)
//{
//    if(count(a,n)==n)
//    { for (int i = 0; i < n; i++) {
//        //if(ad==n)
//        {cout << a[i] << "  ";}
//    }}
//    cout << endl;
//}
//
//// Function to find the permutations
//void findPermutations(int a[], int n)
//{
//    int i;
//
//    // Sort the given array
//    sort(a, a + n);
//
//    // Find all possible permutations
//    cout << "Possible permutations are:\n";
////    do {
////       // for(i=0;i<n-1;i++)
////       // {
////            //if((a[i]+a[i+2])/2!=a[i])
////        //if(count(a,n)==n)
////        {display(a, n);}
////       //}
////    }
//    next_permutation(a, a + n);
//    for(i=0;i<n-1;i++)
//
//    {
//
//        display(a, n);
//        break;
//    }
//
//}
//
//
//void solve()
//{
//    int k;
//    cin>>k;
//    int n=2*k;
//    int a[n];
//    for(int i=0;i<n;i++)
//    {
//        cin>>a[i];
//    }
//
//       // int n = sizeof(a) / sizeof(a[0]);
//    //if(count(a,n)==n){display(a, n);}
//        findPermutations(a, n);
//
//
//
//}
//
//
//
//
void solve()
{
    int k,i;
        cin>>k;
        int n=2*k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    
    sort(a,a+n);
    
    for(i=0;i<k;i++)
    {
        cout<<a[i]<<" ";
        cout<<a[i+k]<<" ";
    }
    cout<<nn;
    
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






//#include<iomanip>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<tuple>
//#include<string>
//#include <iterator>
//#include <map>
//#include<math.h>
//
//using namespace std;
//
//#define pb     push_back
//#define nn     endl
//#define pll    pair<int,int>
//#define ll     long long int
//#define vll    vector<int>
//#define all(a) (a).begin(),(a).end()
//#define x       first
//#define y      second
//#define sz(x)  (int)x.size()
//#define hell   1000000007
//#define lbnd   lower_bound
//#define ubnd   upper_bound
//#define bs     binary_search
//#define mi     map<int,int>
//#define gcd(a,b)  __gcd((a),(b))
//#define lcm(a,b)  ((a)*(b)) / gcd((a),(b))
//#define rep(i,a,b) for(int i=a;i<b;i++)
//#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie
//
//
//int main()
//
//{
//    int k,i;
//        cin>>k;
//        int n=2*k;
//        int a[n];
//        for(int i=0;i<n;i++)
//        {
//            cin>>a[i];
//        }
//
//    sort(a,a+n);
//
//    for(i=0;i<k;i++)
//    {
//        cout<<a[i]<<" ";
//        cout<<a[i+k]<<" ";
//    }
//
//}











