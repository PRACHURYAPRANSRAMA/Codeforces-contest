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


int minSwaps(int arr[], int n)
{
    // Create an array of
    // pairs where first
    // element is array element
    // and second element
    // is position of first element
    pair<int, int> arrPos[n];
    for (int i = 0; i < n; i++)
    {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }

    // Sort the array by array
    // element values to
    // get right position of
    // every element as second
    // element of pair.
    sort(arrPos, arrPos + n);

    // To keep track of visited elements.
    // Initialize
    // all elements as not visited or false.
    vector<bool> vis(n, false);

    // Initialize result
    int ans = 0;

    // Traverse array elements
    for (int i = 0; i < n; i++)
    {
        // already swapped and corrected or
        // already present at correct pos
        if (vis[i] || arrPos[i].second == i)
            continue;

        // find out the number of  node in
        // this cycle and add in ans
        int cycle_size = 0;
        int j = i;
        while (!vis[j])
        {
            vis[j] = 1;

            // move to next node
            j = arrPos[j].second;
            cycle_size++;
        }

        // Update answer by adding current cycle.
        if (cycle_size > 0)
        {
            ans += (cycle_size - 1);
        }
    }

    // Return result
    return ans;
}
 void solve()
{
     int k;
     cin>>k;
     int a[k];
     for(int i=0;i<k;i++)
     {
         cin>>a[i];
     }
     int n = (sizeof(a) / sizeof(int));
     cout << minSwaps(a, n)<<nn;
     if(minSwaps(a, n)==1){cout<<"1"<<nn;return;}
     if(minSwaps(a, n)==0){cout<<"0"<<nn;return;}
     else{cout<<minSwaps(a, n)-1<<nn;return;}
 }
// Driver program to test the above function
int main()
{
    ll t;
    cin>>t;
    while(t--){solve();}
    return 0;
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
//
//void solve()
//{
//    ll n,i,ad=0;
//    cin>>n;
//    ll a[n];
//    for(i=0;i<n;i++)
//    {
//        cin>>a[i];
//    }
//    for(i=0;i<n-1;i++)
//    {
//        //if(a[i]!=i+1){ad++;}
//        if(a[i+1]<a[i]){ad++;}
//    }
////    if(ad==2){cout<<"1"<<nn;return;}
////    if(ad==0){cout<<"0"<<nn;return;}
////    else{cout<<"2"<<nn;}
//    cout<<ad<<nn;
////    cout<<ad-1<<nn;
//    return;
//
//}
//
//
//
//
//int main()
//
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//    }
//
//}
