
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
const int N = 1e3+10;
vector<pair<lli,lli>> graph[N];
 vector<lli>v[5];

void solve()
{
    int n,m;
    cin>>n>>m;

    for(i=0; i<n; i++)
    {
        int v1,v2,wt;
        cin>>v1>>v2>>wt;
        graph[v1].pb({v2,wt});
        graph[v2].pb({v1,wt});
    }


//    for(auto pr : graph[2])
//    {
//        cout<<pr.first<<" "<<pr.second<<endl;
//    }
//



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




