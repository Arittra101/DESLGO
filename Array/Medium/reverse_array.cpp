
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;

#define pq_mn  priority_queue<lli,vector<lli>,greater<lli>>
#define pq_mx priority_queue<int> pq;
#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define SORT(v) sort(v.begin(),v.end());
#define R_SORT(v) sort(v.begin(),v.end(),greater<lli>());
#define en "\n"


void solve()
{
    vi nums{1,2,3,4,5,6};
    int n=nums.size();
    int k = 4;
    k = abs(n-k);
    int i=k-1,j=n;
    int cntNd = abs(n-k);
    int cnt=0;
    while(i+1<n-1)
    {
        cout<<i+1<<" "<<n-1<<endl;
        int ind = abs(i%(n-1));
        swap(nums[i+1],nums[n-1]);
        i++;
        n--;


    }
    i=-1;

    while(i+1<k-1)
    {
        cout<<i+1<<" "<<k-1<<endl;
        int ind = abs(i%(k-1));
        swap(nums[i+1],nums[k-1]);
        i++;
        k--;
    }
    lli sz = nums.size()-1;
    for(i=0;i<nums.size()/2;i++)
    {
        swap(nums[i],nums[sz-i]);
    }

   for(i=0;i<nums.size();i++)
   {
       cout<<nums[i]<<" ";
   }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t,l=0;
    cin>>t;
    while(t--)
    {
        l++;
        //cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}




