
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli j;

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
set<string>st;

void reverse_stack(vi v,lli j)
{
    if(j>=v.size())
    {
        return;
    }

    reverse_stack(v,j+1);

    cout<<v[j]<<" ";

}

void solve()
{
   lli n;
   cin>>n;
   vi v;
   for(lli i=0;i<n;i++)
   {
       lli x; cin>>x;
       v.pb(x);
   }
   reverse_stack(v,0);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();


    return 0;
}




