
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
const lli N = 1e3+10;
vi visite(10,0);
vector<lli>graph[N];

lli DFS(lli node)
{
    if(visite[node]==1)
    {
        return node;
    }
    cout<<node<<" ";
    visite[node]=1;
    for(auto it :  graph[node])
    {
        DFS(it);
    }


}

void solve()
{
    lli vertex,edge;
    cin>>edge;

    for(i=0; i<edge; i++)
    {
        lli node1,node2;
        cin>>node1>>node2;
        graph[node1].pb(node2);
        // graph[node2].pb(node1);
        //cout<<node1<<node2<<endl;
    }

    DFS(2);
//    for(i=0; i<edge; i++)
//    {
//        cout<<i<<endl;
//        for(auto it : graph[i])
//        {
//            DFS(it);
//        }
//        cout<<endl;
//    }
//    cout<<graph[3].size()<<endl;
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




